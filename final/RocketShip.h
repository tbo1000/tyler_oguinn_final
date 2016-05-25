/*
 * Name        : RocketShip.h
 * Author      : Tyler O'Guinn
 * Description : Class header file for our RocketShip class
 */
#ifndef ROCKETSHIP_H
#define ROCKETSHIP_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class RocketShip
{
  public:
  //default constructor to set to default values
  RocketShip();
  //overloaded constructor to change values
  RocketShip(string newName, unsigned int newFuel);
  //mutator function for name
  void setName(string nameinput);
  //accesor function for name
  string getName() const;
  //mutator function for fuel
  void setFuel(unsigned int fuelinput);
  //accesor function for fuel
  unsigned int getFuel() const;
  void addFuelCell(unsigned int fuelAmount);
  bool removeFuelCell(unsigned int cellNumber);
  bool addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount);
  string burnFuel(unsigned int cellNumber);
  protected:
  string name;
  unsigned int fuel;
  vector<unsigned int> fuelCells;
};

#endif