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
int selectOpp();
Fantasy_Man * createOpp(int);

/***********************************************************************
 *                               main
 ***********************************************************************/
int main()
{
   //Establish randomness and set seed
   unsigned seed;
   seed = time(0);
   srand(seed);

   int choice = 0; // Menu choice

   // User Welcome
   cout << "*****************************************" << endl;
   cout << "*              WELCOME TO               *" << endl;
   cout << "*                                       *" << endl;
   cout << "*            BATTLE OF THE              *" << endl;
   cout << "*                                       *" << endl;
   cout << "*             FANTASY MEN               *" << endl;
   cout << "*****************************************" << endl;
   cout << endl << endl;

   cout << "In a world of battles, everyone other" << endl;
   cout << "character you encounter is a problem."  << endl;
   cout << "---------------------------------------------------" << endl;
   cout << "Battle them and move one -- there's no other way..." << endl;

   cout << endl << endl;

   printMenu();

   cout << endl << endl;

   do
   {

      choice = getChoice(); // Assign choice the value returned
                            // by getChoice function
      
      if (choice != 6)
      {       
         int select = 0;                      
         select = selectOpp();
         Fantasy_Man * opponent;
         opponent = createOpp(select);

         // User chooses Barbarian
         if (choice == 1)
         {
            Goblin * userGob = new Goblin;

            userGob->tale_of_tape(userGob, opponent);
        
         }
         // List the contents of the cart
         else if (choice == 2)
         {
            //
            Barbarian * userBarb = new Barbarian;
            userBarb->tale_of_tape(userBarb, opponent);
         }
         else if (choice == 3)
         {
            //
            Reptile_People * userRept = new Reptile_People;
            userRept->tale_of_tape(userRept, opponent);
         }
         else if (choice == 4)
         {
            //
            Blue_Men * userBlue = new Blue_Men;
            userBlue->tale_of_tape(userBlue, opponent);
         }
         else if (choice == 5)
         {
            //
            The_Shadow * userShadow = new The_Shadow;
            userShadow->tale_of_tape(userShadow, opponent); 
         }
      }
   } while (choice != 6);

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
   cout << "CHOOSE FROM THE FOLLOWING CHARACTERS:" << endl;
   cout << "1:  Goblins" << endl;
   cout << "2:  Barbarains" << endl;
   cout << "3:  Reptile People" << endl;
   cout << "4:  Blue Men" << endl;
   cout << "5:  The Shadow" << endl;
   cout << "6:  Quit the Program" << endl;
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
   while (choice < 1 || choice > 6)
   {
      cout << "The only valid choices are 1-6." << endl;
      cout << "Please re-enter: ";
      cin >> choice;
   }
   return choice;
}
/************************************************************************
 *                          selectOpp
 *
 * Displays Menu to Select Opponent
 ***********************************************************************/   
int selectOpp()
{
   int select = 0;
  
   // Menu Display
   cout << "CHOOSE AN OPPONENT:" << endl;
   cout << "1:  Goblins" << endl;
   cout << "2:  Barbarains" << endl;
   cout << "3:  Reptile People" << endl;
   cout << "4:  Blue Men" << endl;
   cout << "5:  The Shadow" << endl;
   cout << endl;

   cin >> select;

   return select;
   
}
/**************************************************************************
 *                          createOpp
 *
 * Create an Opponenet based on the User's selection
 *************************************************************************/
Fantasy_Man * createOpp(int select)
{
   Fantasy_Man * opponent(NULL);

   switch (select)
   {
      case 1: opponent = new Goblin;
              break;
      case 2: opponent = new Barbarian;
              break;
      case 3: opponent = new Reptile_People;
              break;
      case 4: opponent = new Blue_Men;
              break;
      case 5: opponent = new The_Shadow;
              break;
   }
   return opponent;
}
    
