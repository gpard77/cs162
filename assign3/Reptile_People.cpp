/**********************************************************
 *
 * Geoffrey Pard
 * CS 162 - 401
 * Date: 4/29/15
 *
 * Description: This is the implementation for the 
 *   Reptile_People Class.  It inherits from Fantasy_Man
 **********************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Reptile_People.hpp"

using std::cout;
using std::endl;


// Implementation of Reptile_People Class

Reptile_People::Reptile_People()
{
   this->strength = 18;
   this->armor = 7;
   this->name = "Reptile Person";
}

Reptile_People::Reptile_People(int strengthIn, int armorIn, std::string nameIn) : Fantasy_Man(18, 7, "Reptile Person")
{
   this->strength = 18;
   this->armor = 7;
   this->name = "Reptile Person";
}

/****************************************************************
 *                         attack
 *
 * This method sets the attack qualities for Reptile_People. 
 ****************************************************************/
int Reptile_People::attack()
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
/****************************************************************
 *                         defend
 *
 * This method sets the defense qualities for Reptile_People. 
 ****************************************************************/
int Reptile_People::defend() 
{
   int dice;
   int numSides = 6;
   
   for (int i = 0; i < 1; i++)
   {
     dice = rand() % numSides + 1;
     dice += dice;
   }

   return dice;
      
}
