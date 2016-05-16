/*******************************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/29/15
 *
 * Description: ASSIGNMENT 3 -- INHERITANCE
 *    Choose Fantastical Creatures and pit them against each other.
 ********************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Fantasy_Man.cpp"
#include "Barbarian.cpp"
#include "Reptile_People.cpp"
#include "Blue_Men.cpp"
#include "Goblin.cpp"
#include "The_Shadow.cpp"
#include <fstream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

void printMenu();
int getChoice();

/***********************************************************************
 *                               main
 ***********************************************************************/
int main()
{
   //Establish randomness and set seed
   unsigned seed;
   seed = time(0);
   srand(seed);

   Barbarian * barb = new Barbarian();
   //Reptile_People * toad = new Reptile_People();
   //Blue_Men * tobias = new Blue_Men();
   //Goblin * gobbles = new Goblin();
   //The_Shadow * shadow = new The_Shadow();
   //std::ofstream output;

   //output.open("barb_Rolls.txt", std::ios::app);   

   // Test Rolls For Barbarians
   int opponent1_attack = 0;
   int opponent1_defend = 0;

   opponent1_attack = barb->attack();
   opponent1_defend = barb->defend();

   cout << endl;
   cout << "--------------------------" << endl;
   cout << "          BARB 1          " << endl;
   cout << "--------------------------" << endl;
   cout << "Attack Roll" << endl;
   cout << opponent1_attack << endl;
   cout << "Defend Roll" << endl;
   cout << opponent1_defend << endl;

   Barbarian * barb2 = new Barbarian();

   int opponent2_attack = 0;
   int opponent2_defend = 0;

   opponent2_attack = barb->attack();
   opponent2_defend = barb->defend();

   cout << endl;
   cout << "--------------------------" << endl;
   cout << "          BARB 2          " << endl;
   cout << "--------------------------" << endl;
   cout << "Attack Roll" << endl;
   cout << opponent2_attack << endl;
   cout << "Defend Roll" << endl;
   cout << opponent2_defend << endl;

   int damage_barb = abs(opponent2_attack - (opponent1_defend + barb->getArmor()));
   int damage_barb2 = opponent1_attack - opponent2_defend;

   cout << endl;
   cout << "Barb 1 -- New Strength" << endl;
   int updateStrength = barb->getStrength();
   cout << "Start Strength: " << updateStrength << endl;
   updateStrength -= damage_barb;
 
   if (updateStrength > 0)
   {
      barb->setStrength(updateStrength);
   }
   else
   {
      cout << "Barb Died." << endl;
   }

   cout << "New Strength: " << barb->getStrength() << endl;
   cout << "---------------------------" << endl;

  
   delete barb;
   delete barb2;

   cout << endl;
   cout << endl << endl;

   return 0;
}

/************************************************************************
 *                          printMenu
 *
 * Displays Menu of User options
 ***********************************************************************/   
void printMenu()
{
   // Menu Display
   cout << "CHOOSE FROM THE FOLLOWING FILTER OPTIONS:" << endl;
   cout << "1:  Copy Filter" << endl;
   cout << "2:  Encryption Filter" << endl;
   cout << "3:  Uppercase Filter" << endl;
   cout << "4:  Encryption #2 Filter" << endl;
   cout << "5:  Quit the Program" << endl;
   cout << endl;
}

/************************************************************************
 *                      getChoice
 *
 *  This function validates the user's menu selection
 ************************************************************************/
int getChoice()
{
   int choice;

   while (!(cin >> choice))
   {
      cout << "Must be a number: " << endl;
      cin.clear();
      cin.ignore(100, '\n');
   }   
   while (choice < 1 || choice > 5)
   {
      cout << "The only valid choices are 1-5." << endl;
      cout << "Please re-enter: ";
      cin >> choice;
   }
   return choice;
}
