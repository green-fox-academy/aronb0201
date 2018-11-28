//
// Created by Titkos on 28/11/2018.
//

#ifndef KURVAGARDEN_PLANTS_H
#define KURVAGARDEN_PLANTS_H


#include <string>
#include <vector>


class Plants {
public:
    Plants();

    Plants(std::string name);

    virtual void plantState();

    virtual std::string getColor();

    virtual int getWaterNeed();

    virtual int getWaterLevel();

    virtual void irrigate(int water);

    virtual bool needsToBeWateredFirst();

    void addToGarden(Plants *plants);

    void setWaterLevel(int water);


protected:

    std::string _name;
    int _waterNeed;
    int _waterLevel;
    std::vector<Plants *> _plants;


};


#endif //KURVAGARDEN_PLANTS_H
