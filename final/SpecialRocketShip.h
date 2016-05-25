/*
 * Name        : SpecialRocketShip.cpp
 * Author      : Tyler O'Guinn
 * Description : Class header file for our SpecialRocketShip class
 */
 #ifndef SPECIALROCKETSHIP_H
#define SPECIALROCKETSHIP_H

#include "RocketShip.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SpecialRocketShip: public RocketShip
{
    //default constructor to set initial values
    SpecialRocketShip();
    //mutator function for cloaked variable
    void setCloaked(bool cloak);
    //accesor function for cloaked variable
    bool getCloaked() const;
    private:
    bool cloaked;
};

#endif