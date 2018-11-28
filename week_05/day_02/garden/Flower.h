//
// Created by Titkos on 28/11/2018.
//

#ifndef KURVAGARDEN_FLOWER_H
#define KURVAGARDEN_FLOWER_H


#include "Plants.h"

class Flower : public Plants {

public:

    Flower();

    Flower(std::string name);

    void plantState() override;

    std::string getColor() override;

    int getWaterNeed() override;

    int getWaterLevel() override;

    void irrigate(int water) override;

    bool needsToBeWateredFirst() override;

protected:

};


#endif //KURVAGARDEN_FLOWER_H
