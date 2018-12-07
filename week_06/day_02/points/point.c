//
// Created by Titkos on 06/12/2018.
//

#include "point.h"

point_t create_point (float x, float y){

    point_t point;
    point.x =x;
    point.y = y;
    return point;
}

float distance_between_points(point_t point1,point_t point2){
float x_dist;
float y_dist;
if(point1.x > point2.x){
    x_dist = point1.x - point2.x;
    }
    else{
        x_dist = point2.x - point1.x;
    }
    if(point1.y>point2.y){
        y_dist = point1.y - point2.y;
    } else{
        y_dist = point2.y - point1.y;
    }
    return x_dist+y_dist;
}