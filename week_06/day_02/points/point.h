//
// Created by Titkos on 06/12/2018.
//

#ifndef POINTS_POINT_H
#define POINTS_POINT_H

typedef struct {
   float x;
   float y;


}point_t;

point_t create_point(float x, float y);
float distance_between_points(point_t point,point_t point2);

#endif //POINTS_POINT_H
