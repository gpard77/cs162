/**********************************************************
 *
 * Geoffrey Pard
 * CS 162 - 401
 * Date: 4/29/15
 *
 * Description: This is the implementation for the 
 *   Blue_Men Class.  It inherits from Fantasy_Man
 **********************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Blue_Men.hpp"

using std::cout;
using std::endl;


// Implementation of Blue_Men Class

Blue_Men::Blue_Men()
{
   this->strength = 12;
   this->armor = 3;
   this->name = "Blue Man";
}

Blue_Men::Blue_Men(int strengthIn, int armorIn, std::string) : Fantasy_Man(12, 3, "Blue Man")
{
   this->strength = 12;
   this->armor = 3;
   this->name = "Blue Man";
}

/****************************************************************
 *                         attack
 *
 * This method sets the attack qualities for a Barbarian 
 ****************************************************************/
int Blue_Men::attack()
{
   int dice;
   int numSides = 10;
   
   for (int i = 0; i < 2; i++)
   {
     dice = rand() % numSides + 1;
     dice += dice;
   }

   return dice;
      
}
/****************************************************************
 *                         defend
 *
 * This method sets the defense qualities for a Barbarian 
 ****************************************************************/
int Blue_Men::defend() 
{
   int dice;
   int numSides = 6;
   
   for (int i = 0; i < 3; i++)
   {
     dice = rand() % numSides + 1;
     dice += dice;
   }

   return dice;
      
}
