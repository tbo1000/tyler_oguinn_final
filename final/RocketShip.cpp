/*
 * Name        : RocketShip.cpp
 * Author      : Tyler O'Guinn
 * Description : Class function definitions for our RocketShip class
 */
#include "RocketShip.h"
  
  RocketShip::RocketShip()
  {
      name="RS NullPointer";
      fuel=1000;
  }
    
  RocketShip::RocketShip(string newName, unsigned int newFuel)
  {
      name=newName;
      fuel=newFuel;
  }
  void RocketShip::setName(string nameinput)
  {
      name=nameinput;
  }
  string RocketShip::getName() const
  {
      return name;
  }
  void RocketShip::setFuel(unsigned int fuelinput)
  {
      fuel=fuelinput;
  }
  unsigned int RocketShip::getFuel() const
  {
       return fuel;
  }
  void RocketShip::addFuelCell(unsigned int fuelAmount)
  {
      fuelCells.push_back(fuelAmount);
  }
  bool RocketShip::removeFuelCell(unsigned int cellNumber)
  {
      if(fuelCells.size()>cellNumber)
      {
      fuelCells.erase(fuelCells.begin()+cellNumber);
      return true;
      }
      else
      {
          return false;
      }
      
  }
  bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount)
  {
      if(fuelCells.size()>cellNumber){
         fuelCells[cellNumber]=fuelCells[cellNumber]+fuelAmount;
         return true;
      }
      else
      {
          return false;
      }
  }
  string RocketShip::burnFuel(unsigned int cellNumber)
  {
      if(fuelCells.size()>cellNumber)
      {
          
         string result(fuelCells[cellNumber],'*');
         fuelCells[cellNumber]=0;
         return result;
      }
      else
      {
          return "";
      }
  }