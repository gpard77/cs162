/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG
 *   This is the implementation of the Under_House class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include "Under_House.hpp"


// Implementation for Class Under_House
Under_House::Under_House()
{
   forward = Bathroom;
   back = Jims_Porch;
   left = NULL;
   right = NULL;

   setForward("Bathroom");
   setBack("Jims Porch");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Under House");
}

// Constructor with Gumbo arg.
Under_House::Under_House(Gumbo gumboIn)
{
   forward = Bathroom;
   back = Jims_Porch;
   left = NULL;
   right = NULL;

   setForward("Bathroom");
   setBack("Jims Porch");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Under House");
}

/********************************************************
 *              story
 *              
 * Story element for the Kitty Penthouse Room
 *******************************************************/
int Under_House::story(Gumbo gumboIn)
{
   std::cout << "---------------------------------------------" << std::endl;
   std::cout << "After Gumbo fills his cone with food, " << std::endl;
   std::cout << "He sprints off of Jim's Porch to escape " << std::endl;
   std::cout << "the impending assault from Stabby." << std::endl;
   std::cout << "Gumbo hides under the house next door" << std::endl;
   std::cout << "---------------------------------------------" << std::endl;
   moveOn2();
   whitespace();
   std::cout << "---------------------------------------------" << std::endl;
   std::cout << "This is the house he wants to live in, so " << std::endl;
   std::cout << "he has to be careful not to stay under too" << std::endl;
   std::cout << "long lest he fall asleep and wake up soiled." << std::endl;
   std::cout << "It just happens..." << std::endl;
   std::cout << "---------------------------------------------" << std::endl;
   moveOn2();
   whitespace();
   std::cout << "------------------------------------------------------------" << std::endl;
   std::cout << "But, it looks like he'll have some motivation to leave." << std::endl; 
   std::cout << "Stabby has found Scoots and informed him that Gumbo was" << std::endl;
   std::cout << "responsible for that fresh bite mark on his hind quarters." << std::endl;
   std::cout << "------------------------------------------------------------" << std::endl;
   moveOn2();
   whitespace();
   std::cout << "----------------------------------------------------------" << std::endl;
   std::cout << "The two know Gumbo's hiding spot.  But they don't know" << std::endl;
   std::cout << "the entry point.  Stabby and Scoots separate and start" << std::endl;
   std::cout << "circling the house looking for the opening."  << std::endl;
   std::cout << "It's only a matter of time before they find it!" << std::endl;
   std::cout << "----------------------------------------------------------" << std::endl;
   moveOn2();
   whitespace();
   std::cout << "----------------------------------------------------------" << std::endl;
   std::cout << "Gumbo can only close his eyes and hope he can time his" << std::endl;
   std::cout << "departure correctly. A false start will confuse him." << std::endl;
   std::cout << "He can probably only manage three attempts before" << std::endl;
   std::cout << "falling asleep and soiling himself." << std::endl;
   std::cout << "---------------------------------------------------------" << std::endl;
   moveOn2();
   whitespace();

   // Roll Dice for escape
   std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << std::endl;
   std::cout << "Get an even number on a dice throw to save Gumbo!  " << std::endl;
   std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << std::endl;
   std::cout << std::endl << std::endl;
   std::cout << "MOVE ON FOR FIRST THROW..." << std::endl;
   moveOn2();
   whitespace();
   int dice;
   int numFaces = 6;
   int counter = 0;
   while (counter < 3)
   {
      dice = rand() % numFaces + 1;
      if (dice % 2 == 0)
      {
         std::cout << "Throw: " << dice << std::endl;
         std::cout << "*********************" << std::endl;
         std::cout << "YOU DID IT -- GUMBO  " << std::endl;
         std::cout << "GET OUT OF HERE!     " << std::endl;
         std::cout << "*********************" << std::endl;
         std::cout << std::endl;
         moveOn2();
         whitespace();
         break;
      }
      else
      {
         std::cout << "Throw: " << dice << std::endl;
         counter++;
         moveOn3();
      }
   }

   // Counter Gets to Three
   if (counter == 3)
   {
      std::cout << "************************************" << std::endl;
      std::cout << "Gumbo can't take the stress..." << std::endl;
      std::cout << "He falls asleep and soils himself." << std::endl;
      std::cout << "Too dirty to continue." << std::endl;
      std::cout << "GAME OVER..." << std::endl;
      std::cout << "************************************" << std::endl;
      return 5;
   }

   std::cout << "---------------------------------------------------" << std::endl;
   std::cout << "Gumbo spots his opportunity and bolts." << std::endl;
   std::cout << "He knows this house and is aware of a little" << std::endl;
   std::cout << "opening he squeeze into--a pipe that leads inside" << std::endl;
   std::cout << "to the downstairs bathroom." << std::endl;
   std::cout << "---------------------------------------------------" << std::endl;
   moveOn2();
   whitespace();

   return 0;
}



