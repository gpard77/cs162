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
char moveOn();

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

   cout << "In a world of battles, every other" << endl;
   cout << "character you encounter is a problem."  << endl;
   cout << "---------------------------------------------------" << endl;
   cout << "Battle them and move on -- there's no other way..." << endl;

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
         select = selectOpp(); // Get Opponent selection
         Fantasy_Man * opponent; 
         opponent = createOpp(select); // Create opponenet object

         // User chooses Goblin
         if (choice == 1)
         {
            // Create New Goblin Object -- Get Stats
            Goblin * userGob = new Goblin;
            userGob->tale_of_tape(userGob, opponent);
            moveOn();
            cout << std::string(50, '\n');

            // Battle Sequence
            while ((userGob->getStrength() != 0) && (opponent->getStrength() != 0))
            {
               userGob->damage(userGob, opponent);
               userGob->decision(userGob, opponent);
               moveOn();
               cout << std::string(50, '\n');
               if ((userGob->getStrength() == 0) || (opponent->getStrength() == 0))
               {
                  cout << "GAME OVER" << endl;
               }
               else
               {
                  userGob->tale_of_tape(userGob, opponent);
                  moveOn();
               }
            }
            cout << endl;

            delete userGob;
            delete opponent;

            printMenu();


         }
         // User chooses Barbarian
         else if (choice == 2)
         {
            // Create New Barbarian Object -- Get Stats
            Barbarian * userBarb = new Barbarian;
            userBarb->tale_of_tape(userBarb, opponent);
            moveOn();
            cout << std::string(50, '\n');

            // Battle Sequence
            while ((userBarb->getStrength() != 0) && (opponent->getStrength() != 0))
            {
               userBarb->damage(userBarb, opponent);
               userBarb->decision(userBarb, opponent);
               moveOn();
               cout << std::string(50, '\n');
               if ((userBarb->getStrength() == 0) || (opponent->getStrength() == 0))
               {
                  cout << "GAME OVER" << endl;
               }
               else
               {
                  userBarb->tale_of_tape(userBarb, opponent);
                  moveOn();
               }
            }
            cout << endl;

            delete userBarb;
            delete opponent;

            printMenu();

         }
         // User chooses Reptile People
         else if (choice == 3)
         {
            // Create New Reptile Person -- Get Stats
            Reptile_People * userRept = new Reptile_People;
            userRept->tale_of_tape(userRept, opponent);
            moveOn();
            cout << std::string(50, '\n');

            // Battle Sequence
            while ((userRept->getStrength() != 0) && (opponent->getStrength() != 0))
            {
               userRept->damage(userRept, opponent);
               userRept->decision(userRept, opponent);
               moveOn();
               cout << std::string(50, '\n');
               if ((userRept->getStrength() == 0) || (opponent->getStrength() == 0))
               {
                  cout << "GAME OVER" << endl;
               }
               else
               {
                  userRept->tale_of_tape(userRept, opponent);
                  moveOn();
               }
            }
            cout << endl;

            delete userRept;
            delete opponent;

            printMenu();


         }
         // User chooses Blue Men  
         else if (choice == 4)
         {
            // Create New Blue Men Object -- Get Stats
            Blue_Men * userBlue = new Blue_Men;
            userBlue->tale_of_tape(userBlue, opponent);
            moveOn();
            cout << std::string(50, '\n');

            // Battle Sequence
            while ((userBlue->getStrength() != 0) && (opponent->getStrength() != 0))
            {
               userBlue->damage(userBlue, opponent);
               userBlue->decision(userBlue, opponent);
               moveOn();
               cout << std::string(50, '\n');
               if ((userBlue->getStrength() == 0) || (opponent->getStrength() == 0))
               {
                  cout << "GAME OVER" << endl;
               }
               else
               {
                  userBlue->tale_of_tape(userBlue, opponent);
                  moveOn();
               }
            }
            cout << endl;

            delete userBlue;
            delete opponent;

            printMenu();


         }
         // User chooses The Shadow
         else if (choice == 5)
         {
            // Create New Shadow character -- Get Stats
            The_Shadow * userShadow = new The_Shadow;
            userShadow->tale_of_tape(userShadow, opponent);
            moveOn();
            cout << std::string(50, '\n');

            // Battle Sequence
            while ((userShadow->getStrength() != 0) && (opponent->getStrength() != 0))
            {
               userShadow->damage(userShadow, opponent);
               userShadow->decision(userShadow, opponent);
               moveOn();
               cout << std::string(50, '\n');
               if ((userShadow->getStrength() == 0) || (opponent->getStrength() == 0))
               {
                  cout << "GAME OVER" << endl;
               }
               else
               {
                  userShadow->tale_of_tape(userShadow, opponent);
                  moveOn();
               }
            }
            cout << endl;

            delete userShadow;
            delete opponent;

            printMenu();


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
   cout << "CHOOSE YOUR CHARACTER OR QUIT:" << endl;
   cout << "1:  Goblins" << endl;
   cout << "2:  Barbarians" << endl;
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
   cout << "2:  Barbarians" << endl;
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
/************************************************************************
 *                      moveOn
 *
 *  This function progresses a battle to the next round
 ************************************************************************/
char moveOn()
{
   char choice;

   cout << "Please Enter 'y' to move on..." << endl;

   while (!(cin >> choice))
   {
      cout << "Must Enter 'y': " << endl;
      cin.clear();
      cin.ignore(100, '\n');
   }

   if (choice == 'y' || choice == 'Y')
   {
      cout << "" << endl;
   }
   else
   {
      while (choice != 'y' || choice != 'Y')
      {
         cout << "Please Enter 'y' to continue..." << endl;
      }
   }   
   return choice;
}   
