/**************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG; This program
 *  is a text-based role playing game.  It follows
 *  the exploits of a feral cat who only wants a
 *  warm bed.
 ***************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <list>
#include "Gumbo.cpp"
#include "Item.cpp"
#include "Room.cpp"
#include "Kitty_PH.cpp"
#include "Tree.cpp"
#include "Jims_Porch.cpp"
#include "Under_House.cpp"
#include "Bathroom.cpp"
#include "Kitchen.cpp"
#include "Living_Room.cpp"
#include "Office_Closet.cpp"
#include "Bathtub.cpp"
#include "Bed.cpp"

void intro();
Room * createRoom(std::string, Gumbo);
char moveOn();
void whitespace2();

int main()
{
   //Establish randomness and set seed
   unsigned seed;
   seed = time(0);
   srand(seed);

   whitespace2();
   std::cout << "******************************************" << std::endl;
   std::cout << "             THE GUMBO GAME               " << std::endl;
   std::cout << std::endl;
   std::cout << "       The Adventures of a Feral Cat      " << std::endl;
   std::cout << std::endl;
   std::cout << "******************************************" << std::endl;
   std::cout << std::endl << std::endl;
   Gumbo g1;
   moveOn();
   whitespace2();
   // Game Introduction
   intro();

   // The following handles the intial sequence
   // beofore entering a standard loop.
   // Game Starts in Kitty Penthouse
   int value = 0;
   Kitty_PH *ph = new Kitty_PH(g1);
   ph->story(g1); // Penthouse description
   value = ph->phChoice(); // character prompt
   int navNumber;
   std::string roomChange;
   // Check to see if game should end
   if (value != 5)
   {
      std::cout << "******************" << std::endl;
      std::cout << "Stabby is crazy!" << std::endl;
      std::cout << "Get to the tree!" << std::endl;
      std::cout << "******************" << std::endl;
      std::cout << std::endl << std::endl;
      navNumber = navMenu(ph);
      whitespace2();
   }
   else
   {
      navNumber = 5;
   }

   if (navNumber != 5 || value != 5)
   {
      roomChange = ph->moveRoom(ph, navNumber);
   }
 
   // GAME WORLD SEQUENCE
   // Create Room Objects for future rooms
   Room * newRoom1;

   while (navNumber != 5)
   {
      newRoom1 = createRoom(roomChange, g1); //Get User new Room
      navNumber = newRoom1->story(g1);
      if (navNumber != 5)
      {
         navNumber = navMenu(newRoom1);
         roomChange = newRoom1->moveRoom(newRoom1, navNumber);
         whitespace2();
      }      
   }  

   return 0;
}

/*************************************************************
 *                   intro
 *
 * This method prints an intoduction to the game.
 *************************************************************/
void intro()
{
   std::cout << "-------------------------------------------------------------------------" << std::endl;
   std::cout << "Gumbo is a feral cat; he's stinky, he's scared of everything," << std::endl;
   std::cout << "and has a perpetually confused expression on his face." << std::endl;
   std::cout << "He hangs around the neighbor's porch on account of the" << std::endl;
   std::cout << "free food that magically appears in a bowl every day--water too." << std::endl;  
   std::cout << "Gumbo is a big fan of this magic food, but such luxury comes at a price." << std::endl; 
   std::cout << "Roving marauder cat gangs, also attracted to the porch by food," << std::endl;
   std::cout << "attack frequently and drive him off." << std::endl; 
   std::cout << "Some days Gumbo goes without eating." << std::endl;
   std::cout << "------------------------------------------------------------------------" << std::endl;   
   std::cout << std::endl;
   moveOn();
   whitespace2();
   std::cout << "------------------------------------------------------------------------" << std::endl;
   std::cout << "If ONLY Gumbo could find some human to take him inside." << std::endl; 
   std::cout << "Food, sleep, and no stress!  That's the life!" << std::endl; 
   std::cout << "But our fair Gumbo is not domesticated." << std::endl;
   std::cout << "And frankly, a little off-putting." << std::endl;
   std::cout << "------------------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn();
   whitespace2();
   std::cout << "------------------------------------------------------------------------" << std::endl;
   std::cout << "The house adjacent to where Gumbo eats is the hoped for Utopia." << std::endl;
   std::cout << "Clean, quiet, no other pets, and food galore!" << std::endl;
   std::cout << "------------------------------------------------------------------------" << std::endl;
   std::cout << std::endl;   
   moveOn();
   whitespace2();
   std::cout << "------------------------------------------------------------------------" << std::endl;
   std::cout << "Unfortunately, because Gumbo is often scared off the porch" << std::endl; 
   std::cout << "by the marauding cat gangs," << std::endl; 
   std::cout << "he hides underneath the adjacent home's deck a lot." << std::endl; 
   std::cout << "He's scared so he...urinates...defecates. The smell is not good." << std::endl;  
   std::cout << "And Gumbo is already dirty..." << std::endl;  
   std::cout << "So when the owner of this house comes outside and smells this awful smell" << std::endl;
   std::cout << "and sees this dirty cat, Gumbo gets chased away with a broom." << std::endl;
   std::cout << "------------------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn();
   whitespace2();
   std::cout << "--------------------------------------------------------------------------" << std::endl;
   std::cout << "But still, Gumbo knows this house is where he should be." << std::endl;  
   std::cout << "His task: prove to this home owner that he can clean up and be a good pet." << std::endl;
   std::cout << "Then Gumbo could spend stress free days living inside." << std::endl;
   std::cout << "--------------------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   std::cout << "******MOVE ON TO BEGIN GAME********" << std::endl;
   moveOn();
   whitespace2();  
}

/************************************************************************
 *                      getChoice
 *
 *  This function validates the user's menu selection
 ************************************************************************/
int getChoice()
{
   int choice;

   while (!(std::cin >> choice))
   {
      std::cout << "Must be a number: " << std::endl;
      std::cin.clear();
      std::cin.ignore(100, '\n');
   }   
   while (choice < 1 || choice > 10)
   {
      std::cout << "The only valid choices are 1-10." << std::endl;
      std::cout << "Please re-enter: ";
      std::cin >> choice;
   }
   return choice;
}
/**************************************************************************
 *                          createRoom
 *
 * Create a new Room based on the User's navigation
 *************************************************************************/
Room * createRoom(std::string nameIn, Gumbo g1)
{
   Room * newRoom(NULL);

   if (nameIn == "Kitty Penthouse")
   {
      newRoom = new Kitty_PH(g1);
   }
   else if (nameIn == "Tree")
   {
      newRoom = new Tree(g1);
   }
   else if (nameIn == "Jims Porch")
   {
      newRoom = new Jims_Porch(g1);
   }
   else if (nameIn == "Under House")
   {
      newRoom = new Under_House(g1);
   }
   else if (nameIn == "Bathroom")
   {
      newRoom = new Bathroom(g1);
   }
   else if (nameIn == "Kitchen")
   {
      newRoom = new Kitchen(g1);
   }
   else if (nameIn == "Living Room")
   {
      newRoom = new Living_Room(g1);
   }
   else if (nameIn == "Office Closet")
   {
      newRoom = new Office_Closet(g1);
   }
   else if (nameIn == "Bathtub")
   {
      newRoom = new Bathtub(g1);
   }
   else if (nameIn == "Bed")
   {
      newRoom = new Bed(g1);
   }

   return newRoom;
}

/************************************************************************
 *                      moveOn
 *
 *  This function progresses a battle to the next round
 ************************************************************************/
char moveOn()
{
   char choice;

   std::cout << "Please Enter 'y' to move on..." << std::endl;

   while (!(std::cin >> choice))
   {
      std::cout << "Must Enter 'y': " << std::endl;
      std::cin.clear();
      std::cin.ignore(100, '\n');
   }

   if (choice == 'y' || choice == 'Y')
   {
      std::cout << "" << std::endl;
   }
   else
   {
      while (choice != 'y' || choice != 'Y')
      {
         std::cout << "Please Enter 'y' to continue..." << std::endl;
      }
   }   
   return choice;
}

/*****************************************************************
 *                      whitespace2
 *
 * Add white space to clear screen
 *****************************************************************/
void whitespace2()
{
   std::cout << std::string(50, '\n');
}
