/*
 * Name        : SpecialRocketShip.cpp
 * Author      : Tyler O'Guinn
 * Description : Class function definitions for our SpecialRocketShip class
 */
#include "SpecialRocketShip.h"

SpecialRocketShip::SpecialRocketShip()
{
    name="RS Cloaky";
    fuel=1000;
    cloaked=false;
}
void SpecialRocketShip::setCloaked(bool cloak)
{
    cloaked=cloak;
}

bool SpecialRocketShip::getCloaked() const
{
    return cloaked;
}