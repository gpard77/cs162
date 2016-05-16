/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG
 *   This is the implementation of the Jims_Porch class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include "Jims_Porch.hpp"


// Implementation for Class Jims_Porch

Jims_Porch::Jims_Porch()
{
   forward = Under_House;
   back = Tree;
   left = NULL;
   right = NULL;

   setForward("Under House");
   setBack("Tree");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Jims Porch");

}

// Constructor with Gumbo arg.
Jims_Porch::Jims_Porch(Gumbo gumboIn)
{
   forward = Under_House;
   back = Tree;
   left = NULL;
   right = NULL;

   setForward("Under House");
   setBack("Tree");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Jims Porch");

}

/********************************************************
 *              story
 *              
 * Story element for the Kitty Penthouse Room
 *******************************************************/
int Jims_Porch::story(Gumbo gumboIn)
{
   std::cout << "---------------------------------------------------" << std::endl;
   std::cout << "JIMS PORCH: " << std::endl;
   std::cout << "The porch can be a scary place for Gumbo." << std::endl;
   std::cout << "Turns out that the magical bowl of food " << std::endl;
   std::cout << "isn't all that magical.  The owner of the house, " << std::endl;
   std::cout << "Jim, fills it every day.  He whistles happily, " << std::endl;
   std::cout << "waves to all the kitties, but his crowd control " << std::endl;
   std::cout << "is not very good.  Every stray in a 2 mile radius " << std::endl;
   std::cout << "descends upon Jim's porch for free victuals." << std::endl;
   std::cout << "That's trouble for Gumbo..." << std::endl;
   std::cout << "---------------------------------------------------" << std::endl;
   moveOn2();
   whitespace();
   std::cout << "----------------------------------------------------------" << std::endl;
   std::cout << "Gumbo flops out of the tree and onto the porch. " << std::endl;
   std::cout << "Another fat stray, named Scoots, has passed out " << std::endl;
   std::cout << "on top of the food bowl.  Normally, Gumbo would " << std::endl;
   std::cout << "hunch over and wait for Scoots to wake up and leave." << std::endl;
   std::cout << "But up above, Stabby is peering down, growling, and" << std::endl;
   std::cout << "threatening to attack again." << std::endl;
   std::cout << "----------------------------------------------------------" << std::endl;
   moveOn2();
   whitespace();
   std::cout << "----------------------------------------------------------" << std::endl;
   std::cout << "Gumbo needs to move Scoots!" << std::endl;
   std::cout << "----------------------------------------------------------" << std::endl;
   moveOn2();
   whitespace();
   int decide = porchChoice();
   if (decide == 5)
   {
      return decide;
   }
   else
   {
      std::cout << "-------------------------------------------------------" << std::endl;
      std::cout << "Scoots jumps up and shrieks, runs behind the house." << std::endl;
      std::cout << "Gumbo get some food!" << std::endl;
      std::cout << "-------------------------------------------------------" << std::endl;      
   }
   std::cout << "******MOVE ON TO PUT FOOD IN CONE*************" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   
   // Get Food
   std::string thingName = "Food";
   Item thing(thingName);
   gumboIn.addItem(thing);
   std::cout << "-------------------------------------------------------" << std::endl;
   std::cout << "Gumbo picked up: " << thing.getItemName() << std::endl;
   std::cout << "-------------------------------------------------------" << std::endl;

   moveOn2();
   whitespace();

   // Change Gumbo Attributes
   gumboIn.setHunger(0);
   gumboIn.tale_of_tape(gumboIn);

   moveOn2();
   whitespace();

   std::cout << "------------------------------------------------------" << std::endl;
   std::cout << "Hunger reduced to zero" << std::endl;
   std::cout << "If Gumbo's hunger gets to 3, he gets too hungry" << std::endl;
   std::cout << "to do anything." << std::endl;
   std::cout << "------------------------------------------------------" << std::endl;

   moveOn2();
   whitespace();
   
   return 0;
}

/*****************************************************************************
 *                      porchChoice
 *
 * This method handles the prompt in the Kitty Penthouse
 ****************************************************************************/
int Jims_Porch::porchChoice()
{
   char choice;
   int number = 0;

   std::cout << "Hunch Over & Wait? (Enter \"y\")  Bite Scoots? (Enter \"n\")" << std::endl;
   std::cout << "Choice: ";
   std::cin >> choice; 

   if (choice == 'y' || choice == 'Y')
   {
      std::cout << "**********************************************" << std::endl;
      std::cout << "Stabby shanks Gumbo with his sharp tooth." << std::endl;
      std::cout << "Gumbo runs off in terror and soils himself." << std::endl;
      std::cout << "Too dirty to continue today..." << std::endl;
      std::cout << "GAME OVER." << std::endl;
      std::cout << "**********************************************" << std::endl;
      number = 5;
      return 5;
   }
}
