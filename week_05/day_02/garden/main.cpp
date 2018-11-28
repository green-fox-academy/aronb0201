#include <iostream>
#include "Flower.h"
#include "Tree.h"


int main() {
    Plants plants1;
    Flower flower1("yellow");
    Flower flower2("blue");

    Tree tree1("purple");
    Tree tree2("orange");

    plants1.addToGarden(&flower1);
    plants1.addToGarden(&flower2);
    plants1.addToGarden(&tree1);
    plants1.addToGarden(&tree2);

    plants1.irrigate(70);

    return 0;
}