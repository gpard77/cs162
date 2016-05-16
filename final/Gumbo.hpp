/**************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * 
 * Description: FINAL PROJECT -- RPG; This is the
 *  header class for "Gumbo," a feral cat that 
 *  must find a way inside.
 **************************************************/
#ifndef GUMBO_HPP
#define GUMBO_HPP

#include <vector>
#include "Item.hpp"

class Gumbo
{
private:
   int speed;
   int hunger;
   int smarts;
   std::vector<Item> cone;

public:
   Gumbo();
   void setSpeed(int);
   int getSpeed();
   void setHunger(int);
   int getHunger();
   void setSmarts(int);
   int getSmarts();
   void addItem(Item);
   void useItem();
   void tale_of_tape(Gumbo gumboIn);
};
#endif


