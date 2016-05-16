/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/29/15
 *
 * Description: Assignment 3 - Inheritance
 *   This class "Fantasy_Man" will serve as the base
 *   class for the project.  All other classes
 *   of fantasy men will inherit from this class. 
 *   This is the implementation of the class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include "Fantasy_Man.hpp"

using std::cout;
using std::endl;


// Implementation for Class Fantasy_Man

Fantasy_Man::Fantasy_Man()
{}

Fantasy_Man::Fantasy_Man(int strengthIn, int armorIn, std::string nameIn)
{
   setStrength(strengthIn);
   setArmor(armorIn);
   setName(nameIn);
}

void Fantasy_Man::setStrength(int strengthIn)
{
   strength = strengthIn;
}

int Fantasy_Man::getStrength()
{
   return strength;
}

void Fantasy_Man::setArmor(int armorIn)
{
   armor = armorIn;
}

int Fantasy_Man::getArmor()
{
   return armor;
}

void Fantasy_Man::setName(std::string nameIn)
{
   name = nameIn;
}

std::string Fantasy_Man::getName()
{
   return name;
}

/******************************************************************
 *                         damage
 *
 * This method resolves an attack between two characters.  It 
 * considers attack dice throws, defend dice throws, a character's
 * armor, and a character's strenght.
 ******************************************************************/
void Fantasy_Man::damage(Fantasy_Man * thing1, Fantasy_Man * thing2)
{
   // Attack and Defend Rolls For User Character
   int thing1_attack = thing1->attack();
   int thing1_defend = thing1->defend();

   // Attack and Defend Rools for Opponent
   int thing2_attack = thing2->attack();
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
/*********************************************************************
 *                     tale_of_tape
 *
 * This method summarizes the strength attributes for a battle 
 * after each round.
 ********************************************************************/
void Fantasy_Man::tale_of_tape(Fantasy_Man * thing1, Fantasy_Man * thing2)
{
   cout << "********************************************" << endl;
   cout << "              TALE OF THE TAPE              " << endl;
   cout << "********************************************" << endl;
   cout << endl;
   cout << "Your Character: " << thing1->getName() << endl;
   cout << "Strength: " << thing1->getStrength() << endl;
   cout << "********************************************" << endl;
   cout << endl;
   cout << "Opponent: " << thing2->getName() << endl;
   cout << "Strength: " << thing2->getStrength() << endl;
   cout << "--------------------------------------------" << endl;
   cout << endl;
}
/**********************************************************************
 *                    decision
 *
 * This method checks the result of a battle round and determines
 * if there has been a winner.
 *********************************************************************/
void Fantasy_Man::decision(Fantasy_Man * thing1, Fantasy_Man * thing2)
{
   int user = thing1->getStrength();
   int opponent = thing2->getStrength();

   if (user <= 0)
   {
      cout << "-------------------------" << endl;
      cout << "Strength Depleted." << endl;
      cout << "You have lost the battle." << endl;   
      cout << "-------------------------" << endl;
      cout << endl;
   }
   else if (opponent <= 0)
   {
      cout << "---------------------------" << endl;
      cout << "Opponent Strength Depleted." << endl;
      cout << "You are VICTORIOUS!" << endl;   
      cout << "---------------------------" << endl;
      cout << endl;
   }
   else if ((user <= 0) && (opponent <= 0))
   {
      cout << "--------------------------------" << endl;
      cout << "Simultaneous Strength Depletion." << endl;
      cout << "DRAW: Both go home in shame...  " << endl;   
      cout << "--------------------------------" << endl;
      cout << endl;
   }

}
