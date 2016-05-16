/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG
 *   This is the implementation of the Bathroom class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include "Bathroom.hpp"


// Implementation for Class Bathroom

Bathroom::Bathroom()
{
   forward = NULL;
   back = Under_House;
   left = Kitchen;
   right = NULL;

   setForward("CLOSED");
   setBack("Under House");
   setLeft("Kitchen");
   setRight("CLOSED");

   setName("Bathroom");
}

// Constructor with Gumbo arg.
Bathroom::Bathroom(Gumbo gumboIn)
{
   forward = NULL;
   back = Under_House;
   left = Kitchen;
   right = NULL;

   setForward("CLOSED");
   setBack("Under House");
   setLeft("Kitchen");
   setRight("CLOSED");

   setName("Bathroom");
}

/********************************************************
 *              story
 *              
 * Story element for the Bathroom
 *******************************************************/
int Bathroom::story(Gumbo gumboIn)
{
   std::cout << "************************************************" << std::endl;
   std::cout << "Man... All this running is making Gumbo hungry. " << std::endl;
   std::cout << "            +1 hunger                           " << std::endl;
   std::cout << "************************************************" << std::endl;
   moveOn2();
   whitespace();
   std::cout << "************************************************" << std::endl;
   std::cout << "But the running does keep him in shape...       " << std::endl;
   std::cout << "                +1 speed                        " << std::endl;
   std::cout << "************************************************" << std::endl;
   moveOn2();
   whitespace();

   // Adjust Gumbo's attributes
   gumboIn.setHunger(1);
   gumboIn.setSpeed(2);

   // Gumbo traits recap
   gumboIn.tale_of_tape(gumboIn);
   moveOn2();
   whitespace();

   std::cout << "--------------------------------------------------" << std::endl;
   std::cout << "These old houses have quirks to them. Gumbo was" << std::endl;
   std::cout << "able to find a way inside a pipe that leads into " << std::endl;
   std::cout << "a cabinet.  Shoddy workmanship... " << std::endl;
   std::cout << "Bad for homeowners; great for Gumbo!" << std::endl;
   std::cout << "--------------------------------------------------" << std::endl;
   moveOn2();
   whitespace();
   std::cout << "------------------------------------------------------" << std::endl;
   std::cout << "The owner just walked past the bathroom and outside" << std::endl;
   std::cout << "to take out the garbage.  Quick Gumbo: you have a" << std::endl;
   std::cout << "chance to get deeper into the house!" << std::endl;
   std::cout << "------------------------------------------------------" << std::endl;
   moveOn2();
   whitespace();

   return 0;
}



