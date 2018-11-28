//
// Created by Titkos on 28/11/2018.
//

#ifndef KURVAGARDEN_TREE_H
#define KURVAGARDEN_TREE_H


#include "Plants.h"

class Tree : public Plants {
public:

    Tree();

    Tree(std::string name);

    void plantState() override;

    std::string getColor() override;

    int getWaterNeed() override;

    int getWaterLevel() override;

    void irrigate(int water) override;

    bool needsToBeWateredFirst() override;

protected:


};


#endif //KURVAGARDEN_TREE_H
