/**********************************************************
 *
 * Geoffrey Pard
 * CS 162 - 401
 * Date: 4/29/15
 *
 * Description: This is the implementation for the 
 *   Barbarian Class.  It inherits from Fantasy_Man
 **********************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Barbarian.hpp"

using std::cout;
using std::endl;


// Implementation of Barbarian Class

Barbarian::Barbarian()
{
   this->strength = 12;
   this->armor = 0;
   this->name = "Barbarian";
}

Barbarian::Barbarian(int strengthIn, int armorIn, std::string nameIn) : Fantasy_Man(12, 0, "Barbarian")
{
   this->strength = 12;
   this->armor = 0;
   this->name = "Barbarian";
}

/****************************************************************
 *                         attack
 *
 * This method sets the attack qualities for a Barbarian 
 ****************************************************************/
int Barbarian::attack()
{
   int dice;
   int numSides = 6;
   
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
int Barbarian::defend() 
{
   int dice;
   int numSides = 6;
   
   for (int i = 0; i < 2; i++)
   {
     dice = rand() % numSides + 1;
     dice += dice;
   }

   return dice;
      
}
