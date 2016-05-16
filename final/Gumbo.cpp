/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 *
 * Description: FINAL PROJECT -- RPG; This is the
 *   implementation for the Gumbo Class.
 ****************************************************/
#include <iostream>
#include "Gumbo.hpp"

// Implementation for class Gumbo

//Default Constructor
Gumbo::Gumbo()
{
   setSpeed(1);
   setHunger(3);
   setSmarts(1);
}

// Set Speed
void Gumbo::setSpeed(int speedIn)
{
   speed = speedIn;
}

// Get Speed
int Gumbo::getSpeed()
{
   return speed;
}

// Set Hunger
void Gumbo::setHunger(int hungerIn)
{
   hunger = hungerIn;
}

// Get Hunger
int Gumbo::getHunger()
{
   return hunger;
}

// Set Smarts
void Gumbo::setSmarts(int smartsIn)
{
   smarts = smartsIn;
}

// Get Smarts
int Gumbo::getSmarts()
{
   return smarts;
}

/*******************************************************
 *                addItem
 *
 * This method allows Gumbo's omnipresent controller to
 * remember an item.  His limit is three.
 ********************************************************/
void Gumbo::addItem(Item thingIn)
{
   cone.push_back(thingIn);
}

/*********************************************************************
 *                     tale_of_tape
 *
 * This method summarizes Gumbo's attributes.
 ********************************************************************/
void Gumbo::tale_of_tape(Gumbo gumboIn)
{
   std::cout << "********************************************" << std::endl;
   std::cout << "               GUMBO TRAITS                 " << std::endl;
   std::cout << "********************************************" << std::endl;
   std::cout << std::endl;
   std::cout << "Speed: " << gumboIn.getSpeed() << std::endl;
   std::cout << "Hunger: " << gumboIn.getHunger() << std::endl;
   std::cout << "Smarts: " << gumboIn.getSmarts() << std::endl;
   std::cout << "********************************************" << std::endl;
   std::cout << std::endl;
  
}


