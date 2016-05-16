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
   Reptile_People * toad = new Reptile_People();
   Blue_Men * tobias = new Blue_Men();
   Goblin * gobbles = new Goblin();
   The_Shadow * shadow = new The_Shadow();

   cout << endl;
   cout << "************************************" << endl; 
   cout << "           TEST ATTRIBUTES          " << endl;
   cout << "************************************" << endl;

   cout << endl;
   cout << "------------------------------------" << endl;
   cout << "GOBLIN" << endl;
   cout << endl;
   cout << "Strength: " << gobbles->getStrength() << endl;
   cout << "Armor: " << gobbles->getArmor() << endl;
   cout << "------------------------------------" << endl;
   cout << "BARBARIAN" << endl;
   cout << endl;
   cout << "Strength: " << barb->getStrength() << endl;
   cout << "Armor: " << barb->getArmor() << endl;
   cout << "------------------------------------" << endl;
   cout << "REPTILE_PEOPLE" << endl;
   cout << endl;
   cout << "Strength: " << toad->getStrength() << endl;
   cout << "Armor: " << toad->getArmor() << endl;
   cout << "------------------------------------" << endl;
   cout << "BLUE_MEN" << endl;
   cout << endl;
   cout << "Strength: " << tobias->getStrength() << endl;
   cout << "Armor: " << tobias->getArmor() << endl;
   cout << "------------------------------------" << endl;
   cout << "THE_SHADOW" << endl;
   cout << endl;
   cout << "Strength: " << shadow->getStrength() << endl;
   cout << "Armor: " << shadow->getArmor() << endl;
   cout << "------------------------------------" << endl;
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
