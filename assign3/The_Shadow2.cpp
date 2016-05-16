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

   // The Shadow -- Special Defense
   std::string visible1;
   std::string visible2;

   if ((thing1_defend == -1) || (thing2_defend == -1))
   {
      if (thing1_defend == -1)
      {
         visible1 = "Cloaked";
      }
      else if (thing2_defend == -1)
      {
         visible2 = "Cloaked";
      }
    }


   // Summarize Result of Rolls
   cout << "**************************************" << endl;
   cout << "              ROLLS                   " << endl;
   cout << "**************************************" << endl;
   cout << '\t' << '\t' << "ATTACK" << '\t' << "DEFEND" << endl;
   cout << "You" << '\t' << '\t' << thing1_attack << '\t' << thing1_defend << endl;
   cout << "Opponent" << '\t' << thing2_attack << '\t' << thing2_defend << endl;
   cout << "--------------------------------------" << endl;


   // Evaluate Rolls to figure Damage
   int damage1  = abs(thing2_attack - (thing1_defend + thing1->getArmor()));
   int damage2  = abs(thing1_attack - (thing2_defend + thing2->getArmor()));

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
