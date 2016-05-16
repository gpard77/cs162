/**********************************************************
 *
 * Geoffrey Pard
 * CS 162 - 401
 * Date: 4/29/15
 *
 * Description: This is the implementation for the 
 *  The_Shadow_Op Class. It inherits from Fantasy_Man
 **********************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "The_Shadow_Op.hpp"

using std::cout;
using std::endl;


// Implementation of The_Shadow Class

The_Shadow_Op::The_Shadow_Op()
{
   this->strength = 12;
   this->armor = 0;
   this->name = "The Shadow";
}

The_Shadow_Op::The_Shadow_Op(int strengthIn, int armorIn, std::string nameIn) : Fantasy_Man(12, 0, "The Shadow")
{
   this->strength = 12;
   this->armor = 0;
   this->name = "The Shadow";
}

/****************************************************************
 *                         attack
 *
 * This method sets the attack qualities for The Shadow 
 ****************************************************************/
int The_Shadow_Op::attack()
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
 * This method sets the defense qualities for a The Shadow. 
 ****************************************************************/
int The_Shadow_Op::defend() 
{
   int dice;
   int numSides = 100;
   
   for (int i = 0; i < 1; i++)
   {
     dice = rand() % numSides + 1;
     dice += dice;
   }

   if (dice > 10)
   {
      dice = -100;
   }
   else
   {
      dice = 0;
   }

   return dice;
      
}
/******************************************************************
 *                         damage
 *
 * This method resolves an attack between two characters.  It 
 * considers attack dice throws, defend dice throws, a character's
 * armor, and a character's strenght.
 ******************************************************************/
void The_Shadow_Op::damage(Fantasy_Man * thing1, The_Shadow_Op * thing2)
{
   // Attack and Defend Rolls For User Character
   int thing1_attack = thing1->attack();
   int thing1_defend = thing1->defend();

   // Attack and Defend Rolls for Opponent
   int thing2_attack = thing2->attack();
   int thing2_defend = thing2->defend();

   // The Shadow -- Special Defense
   std::string visible;
   if (thing2_defend == -1)
   {
      visible = "Cloaked";
   }
   else
   {
      visible = "Uncloaked";
   }
  
   // Opponent as The Shadow -- Special Defense
   std::string visibleOp;
   if (thing2_defend == -1)
   {
      visibleOp = "Cloaked";
   }
   else
   {
      visibleOp = "Uncloaked";
   }

   cout << "SHADOW OP METHOD!!!" << endl;

   // Summarize Result of Rolls
   cout << "**************************************" << endl;
   cout << "              ROLLS                   " << endl;
   cout << "**************************************" << endl;
   cout << '\t' << '\t' << "ATTACK" << '\t' << "DEFEND" << endl;
   cout << "You" << '\t' << '\t' << thing1_attack << '\t' << thing1_defend << endl;
   cout << "Opponent" << '\t' << thing2_attack << '\t' << visibleOp << endl;
   cout << "--------------------------------------" << endl;


   /* Evaluate Rolls to figure Damage
   int damage1 = 0;
   if (thing1_defend == -1)
   {
      damage1 = 0;
   }*/
     
   int damage1  = abs(thing2_attack - (thing1_defend + thing1->getArmor()));
 

   int damage2 = 0;
   if (thing2_defend == -1)
   {
      damage2 = 0;
   }

   //int damage2  = abs(thing1_attack - (thing2_defend + thing2->getArmor()));

   // Update Strength for User Character
   int updateStrength1 = thing1->getStrength();
   updateStrength1 -= damage1;
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
   updateStrength2 -= damage2;
   if (updateStrength2 < 0)
   {
      thing2->setStrength(0);
   }
   else
   {
      thing2->setStrength(updateStrength2);
   }

}
/******************************************************************
 *                         damage
 *
 * This method resolves an attack between two characters.  It 
 * considers attack dice throws, defend dice throws, a character's
 * armor, and a character's strenght.
 ******************************************************************
void The_Shadow::damage(Fantasy_Man * thing1, The_Shadow * thing2)
{
   // Attack and Defend Rolls For User Character
   int thing1_attack = thing1->attack();
   int thing1_defend = thing1->defend();

   // Attack and Defend Rools for Opponent
   int thing2_attack = thing2->attack();
   int thing2_defend = thing2->defend();

   // The Shadow -- Special Defense
   std::string visible;
   if (thing2_defend == -1)
   {
      visible = "Cloaked";
   }
   else
   {
      visible = "Uncloaked";
   }

   // Summarize Result of Rolls
   cout << "**************************************" << endl;
   cout << "              ROLLS                   " << endl;
   cout << "**************************************" << endl;
   cout << '\t' << '\t' << "ATTACK" << '\t' << "DEFEND" << endl;
   cout << "You" << '\t' << '\t' << thing1_attack << '\t' << thing1_defend << endl;
   cout << "Opponent" << '\t' << thing2_attack << '\t' << visible << endl;
   cout << "--------------------------------------" << endl;


   // Evaluate Rolls to figure Damage
   int damage2 = 0;
   if (thing2_defend == -1)
   {
      //thing2_attack = 0;
      //damage1  = abs(thing2_attack - (thing1_defend + thing1->getArmor()));
      damage2 = 0;
   }

   int damage1  = abs(thing2_attack - (thing1_defend + thing1->getArmor()));

   // Update Strength for User Character
   int updateStrength1 = thing1->getStrength();
   updateStrength1 -= damage1;
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
   updateStrength2 -= damage2;
   if (updateStrength2 < 0)
   {
      thing2->setStrength(0);
   }
   else
   {
      thing2->setStrength(updateStrength2);
   }

}*/
