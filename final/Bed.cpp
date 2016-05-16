/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG
 *   This is the implementation of the Bed class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include "Bed.hpp"


// Implementation for Class Bathtub

Bed::Bed()
{
   forward = NULL;
   back = Bathtub;
   left = NULL;
   right = NULL;

   setForward("CLOSED");
   setBack("Bed");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Bed");
}

// Constructor with Gumbo arg.
Bed::Bed(Gumbo gumboIn)
{
   forward = NULL;
   back = Bathtub;
   left = NULL;
   right = NULL;

   setForward("CLOSED");
   setBack("Bed");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Bed");
}

/********************************************************
 *              story
 *              
 * Story element for finding a warm bed
 *******************************************************/
int Bed::story(Gumbo gumboIn)
{
   std::cout << "-------------------------------------------------" << std::endl;
   std::cout << "Gumbo takes his place on the bed" << std::endl;
   std::cout << "He burrows into a blanket, squeezes between two" << std::endl;
   std::cout << "pillows.  He's an aristocrat kitty, a proper" << std::endl;
   std::cout << "domesticated feline." << std::endl;
   std::cout << "-------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   std::cout << "---------------------------------------------------------------" << std::endl;
   std::cout << "The homeowner enters the room, sees fluffy Gumbo" << std::endl;
   std::cout << "sitting there, and with a kind of aw shucks demeanor" << std::endl;
   std::cout << "says, \"how'd you get in here?\"" << std::endl;
   std::cout << "Gumbo only gives a little kitty shrug and bites into" << std::endl;
   std::cout << "a piece of pie.  Gumbo winks.  The audience laughs..." << std::endl;
   std::cout << "---------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   std::cout << "----------------------------------------" << std::endl;
   std::cout << "            ***** WINNER*****           " << std::endl;
   std::cout << "----------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();

   int winner = 5;

   return winner;
}



