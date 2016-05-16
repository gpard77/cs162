/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG
 *   This is the implementation of the Kitty_PH class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include "Kitty_PH.hpp"


// Implementation for Class Kitty_PH

Kitty_PH::Kitty_PH()
{
   forward = Tree;
   back = NULL;
   left = NULL;
   right = NULL;

   setForward("Tree");
   setBack("CLOSED");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Kitty Penthouse");
}

// Constructor with Gumbo Arg.
Kitty_PH::Kitty_PH(Gumbo gumboIn)
{
   forward = Tree;
   back = NULL;
   left = NULL;
   right = NULL;

   setForward("Tree");
   setBack("CLOSED");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Kitty Penthouse");
}

/********************************************************
 *              story
 *              
 * Story element for the Kitty Penthouse Room
 *******************************************************/
int Kitty_PH::story(Gumbo gumboIn)
{
   std::cout << "---------------------------------------------------------------" << std::endl;
   std::cout << "Welcome to the KITTY PENTHOUSE:" << std::endl;
   std::cout << "This kitty penthouse is where Gumbo sleeps most nights." << std::endl;  
   std::cout << "It's a bare area in the roof that hangs over the porch." << std::endl;  
   std::cout << "The accommodations are not pretty, but many of the strays" << std::endl; 
   std::cout << "in the area squeeze in to get" << std::endl; 
   std::cout << "protection from the weather--especially in winter." << std::endl;
   std::cout << "---------------------------------------------------------------" << std::endl;  
   moveOn2();
   whitespace();
   std::cout << "-------------------------------------------------------------------------" << std::endl;
   std::cout << "Gumbo is jolted awake; two angry eyes stare back at him." << std::endl;  
   std::cout << "A vicious cat they call Stabby has been a long time tormentor of Gumbo." << std::endl;  
   std::cout << "Every time Gumbo tries to get a snack," << std::endl; 
   std::cout << "you can count on Stabby chasing him away." << std::endl;  
   std::cout << "Legend says that Stabby used to be a domesticated feline," << std::endl;
   std::cout << "all proper and stuff..." << std::endl;  
   std::cout << "But a toddler changed him with a pair of tweezers" << std::endl; 
   std::cout << "and the subtraction of a few whiskers--literally changed him." << std::endl;  
   std::cout << "He's been vicious ever since." << std::endl;
   std::cout << std::endl;
   std::cout << "Move on to speak with Stabby..." << std::endl;
   std::cout << "-------------------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   std::cout << "-------------------------------------------------------------------------" << std::endl;
   std::cout << "\"Gumbo I see you haven't learned.  You dare sleep where I sleep." << std::endl;
   std::cout << "I consider that a sign of disrespect." << std::endl;
   std::cout << "I'll give you a choice: You can go back to sleep and" << std::endl; 
   std::cout << "whatever happens, happens..." << std::endl;
   std::cout << "or you can scram now and sleep better." << std::endl;
   std::cout << "That is if you consider sleeping in your own filth better.\"" << std::endl;    
   std::cout << "-------------------------------------------------------------------------" << std::endl;
   moveOn2();
   std::cout << std::endl;
   
   whitespace();
   return 0;
}

/*****************************************************************************
 *                      phChoice
 *
 * This method handles the prompt in the Kitty Penthouse
 ****************************************************************************/
int Kitty_PH::phChoice()
{
   char choice;
   int number = 0;

   std::cout << "Stay and Sleep? (Enter \"y\")  Or Scram? (Enter \"n\")" << std::endl;
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

/*****************************************************************************
 *                          quit
 *
 * Gane Over
 *****************************************************************************/
int Kitty_PH::quit()
{
   int number = 5;
   return number;
}


