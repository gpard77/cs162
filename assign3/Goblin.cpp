/**********************************************************
 *
 * Geoffrey Pard
 * CS 162 - 401
 * Date: 4/29/15
 *
 * Description: This is the implementation for the 
 *  Goblin Class. It inherits from Fantasy_Man
 **********************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Goblin.hpp"

using std::cout;
using std::endl;


// Implementation of Goblin Class

Goblin::Goblin()
{
   this->strength = 8;
   this->armor = 3;
   this->name = "Goblin";
}

Goblin::Goblin(int strengthIn, int armorIn, std::string nameIn) : Fantasy_Man(8, 3, "Goblin")
{
   this->strength = 8;
   this->armor = 3;
   this->name = "Goblin";
}

/****************************************************************
 *                         attack
 *
 * This method sets the attack qualities for a Goblin 
 ****************************************************************/
int Goblin::attack()
{
   int dice;
   int numSides = 6;
   
   for (int i = 0; i < 2; i++)
   {
     dice = rand() % numSides + 1;
     dice += dice;
   }

   if ( dice == 12)
   {
      cout << "Achilles Slash!" << endl;
   }

   return dice;
      
}
/****************************************************************
 *                         defend
 *
 * This method sets the defense qualities for a Goblin 
 ****************************************************************/
int Goblin::defend() 
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
/******************************************************************
 *                      damage
 *
 *****************************************************************/
void Goblin::damage(Fantasy_Man * thing1, Fantasy_Man * thing2)
{
   // Attack and Defend Rolls For User Character
   int thing1_attack = thing1->attack();
   int thing1_defend = thing1->defend();

   // Attack and Defend Rools for Opponent
   int thing2_attack = thing2->attack();
   if (thing1_attack == 12)
   {
      thing2_attack /= 2;
   }
   int thing2_defend = thing2->defend();

   // Summarize Result of Rolls
   cout << "**************************************" << endl;
   cout << "              ROLLS                   " << endl;
   cout << "**************************************" << endl;
   cout << '\t' << '\t' << "ATTACK" << '\t' << "DEFEND" << endl;
   cout << "You" << '\t' << '\t' << thing1_attack << '\t' << thing1_defend << endl;
   cout << "Opponent" << '\t' << thing2_attack << '\t' << thing2_defend << endl;
   cout << "--------------------------------------" << endl;


   // Evaluate Rolls to figure Damage
   int damage1  = (thing2_attack - (thing1_defend + thing1->getArmor()));
   int damage2  = (thing1_attack - (thing2_defend + thing2->getArmor()));

   // Update Strength for User Character
   int updateStrength1 = thing1->getStrength();
   if (damage1 > 0 && damage1 < 70)
   {
      updateStrength1 -= damage1;
   }
  
   if (updateStrength1 < 0)
   {
      thing1->setStrength(0);
   }
   else
   {
      thing1->setStrength(updateStrength1);
   }

   // Update Strength for Opponent
   int updateStrength2 = thing2->getStrength();
   if (damage2 > 0 && damage2 < 70)
   {
      updateStrength2 -= damage2;
   }

   if (updateStrength2 < 0)
   {
      thing2->setStrength(0);
   }
   else
   {
      thing2->setStrength(updateStrength2);
   }
}



/************************************************************
 *                  damage
 *
 * Overloaded for Special Case
 ***********************************************************/
void Goblin::damage(Fantasy_Man * thing1, Goblin * thing2)
{
   // Attack and Defend Rools for Opponent
   int thing2_attack = thing2->attack();
   int thing2_defend = thing2->defend();

   // Attack and Defend Rolls For User Character
   int thing1_attack = thing1->attack();
   if (thing2_attack == 12)
   {
      thing1_attack /= 2;
   }
   int thing1_defend = thing1->defend();

   // Summarize Result of Rolls
   cout << "**************************************" << endl;
   cout << "              ROLLS                   " << endl;
   cout << "**************************************" << endl;
   cout << '\t' << '\t' << "ATTACK" << '\t' << "DEFEND" << endl;
   cout << "You" << '\t' << '\t' << thing1_attack << '\t' << thing1_defend << endl;
   cout << "Opponent" << '\t' << thing2_attack << '\t' << thing2_defend << endl;
   cout << "--------------------------------------" << endl;


   // Evaluate Rolls to figure Damage
   int damage1  = (thing2_attack - (thing1_defend + thing1->getArmor()));
   int damage2  = (thing1_attack - (thing2_defend + thing2->getArmor()));

   // Update Strength for User Character
   int updateStrength1 = thing1->getStrength();
   if (damage1 > 0 && damage1 < 70)
   {
      updateStrength1 -= damage1;
   }
  
   if (updateStrength1 < 0)
   {
      thing1->setStrength(0);
   }
   else
   {
      thing1->setStrength(updateStrength1);
   }

   // Update Strength for Opponent
   int updateStrength2 = thing2->getStrength();
   if (damage2 > 0 && damage2 < 70)
   {
      updateStrength2 -= damage2;
   }

   if (updateStrength2 < 0)
   {
      thing2->setStrength(0);
   }
   else
   {
      thing2->setStrength(updateStrength2);
   }
}
