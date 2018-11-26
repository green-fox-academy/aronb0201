#include <iostream>
#include "Aircrafts.h"
#include "Carrier.h"
#include "F16.h"
#include "F35.h"

int main() {

    F16 elsof16;
    F35 elsof35;

    Carrier elsocarrier;
    elsocarrier.addToStore( &elsof16);
    elsocarrier.fill();
    elsocarrier.getStatus();

    Carrier masodikcarrier;
    masodikcarrier.addToStore(&elsof35);
    masodikcarrier.fill();
    masodikcarrier.fight(&elsocarrier);
    masodikcarrier.getStatus();

    elsocarrier.getStatus();







    return 0;
}