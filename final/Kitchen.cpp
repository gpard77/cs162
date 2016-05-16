/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG
 *   This is the implementation of the Kitchen class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include "Kitchen.hpp"


// Implementation for Class Kitchen

Kitchen::Kitchen()
{
   forward = NULL;
   back = Bathroom;
   left = NULL;
   right = Living_Room;

   setForward("CLOSED");
   setBack("Bathroom");
   setLeft("CLOSED");
   setRight("Living Room");

   setName("Kitchen");
}

// Constructor with Gumbo arg.
Kitchen::Kitchen(Gumbo gumboIn)
{
   forward = NULL;
   back = Bathroom;
   left = NULL;
   right = Living_Room;

   setForward("CLOSED");
   setBack("Bathroom");
   setLeft("CLOSED");
   setRight("Living Room");

   setName("Kitchen");
}

/********************************************************
 *              story
 *              
 * Story element for the Kitchen
 *******************************************************/
int Kitchen::story(Gumbo gumboIn)
{
   std::cout << "-----------------------------------------------" << std::endl;
   std::cout << "THE KITCHEN:" << std::endl;
   std::cout << "Oh, the kitchen... So much food!  Gumbo can" << std::endl;
   std::cout << "hardly stand it!" << std::endl;
   std::cout << "-----------------------------------------------" << std::endl;
   moveOn2();
   whitespace();
   std::cout << "-----------------------------------------------------" << std::endl;
   std::cout << "Gumbo has a little food left in his cone, he can eat " << std::endl;
   std::cout << "that but he's more tempted by the pie that sits on" << std::endl;
   std::cout << "the counter..." << std::endl;
   std::cout << "-----------------------------------------------------" << std::endl;
   moveOn2();
   whitespace();
   std::cout << "------------------------------------------------------" << std::endl;
   std::cout << "Should Gumbo eat the pie? (y/n) " << std::endl;
   std::cout << "Answer: ";
   char response;
   std::cin >> response;
   
   
   if (response == 'y' || response == 'Y')
   {
      std::cout << "---------------------------------------------------------" << std::endl;
      std::cout << "Of course, you want the pie..." << std::endl;
      std::cout << "Looks like it's in some contraption to keep toddlers" << std::endl;
      std::cout << "and cats out of it!" << std::endl;
      std::cout << "---------------------------------------------------------" << std::endl;
      std::cout << std::endl;
      moveOn2();
      whitespace();
      std::cout << "---------------------------------------------------------" << std::endl;
      std::cout << "You'll have to guess the 3 digit code to get the PIE." << std::endl;
      std::cout << "It will be 3 digits.  Digits only.  Then you get Pi..." << std::endl;
      std::cout << "I mean, PIE." << std::endl;
      std::cout << "---------------------------------------------------------" << std::endl;
      std::cout << std::endl;
      moveOn2();
      whitespace();
      
      int digit1 = 3;
      int digit2 = 1;
      int digit3 = 4;
      int guess1, guess2, guess3;
      int failNum = 5;

      std::cout << "Enter 1st digit: ";
      std::cin >> guess1;

      if (digit1 == guess1)
      {
         std::cout << "Enter 2nd digit: ";
         std::cin >> guess2;
         if (digit2 == guess2)
         {
            std::cout << "Enter 3rd digit: ";
            std::cin >> guess3;
            if (digit3 == guess3)
            {
               std::cout << "*********************************************" << std::endl;
               std::cout << "          YOU DID IT!  PIE TIME!             " << std::endl;
               std::cout << " You even have some left over...             " << std::endl;
               std::cout << " Hunger reduce to 0; smarts +1               " << std::endl;
               std::cout << "*********************************************" << std::endl;
               std::cout << std::endl;
               moveOn2();
               whitespace();
               gumboIn.setHunger(0);
               gumboIn.setSmarts(2);
               gumboIn.tale_of_tape(gumboIn);
               moveOn2();
               whitespace();

               std::string thingName2 = "Pie";
               Item thing2(thingName2);
               gumboIn.addItem(thing2);
              
               std::cout << "**********************************************" << std::endl;
               std::cout << "Gumbo picked up: " << thing2.getItemName() << std::endl;
               std::cout << "**********************************************" << std::endl;
               std::cout << std::endl;
             
            }
            else
            {
               fail();
               return failNum;
            }
         }
         else
         {
            fail();
            return failNum;
         }
      }
      else
      {
         fail();
         return failNum;
      }
   }
   else if (response == 'n' || response == 'N')
   {
      std::cout << "--------------------------------------------" << std::endl; 
      std::cout << "Smart thinking... Keep it moving." << std::endl;
      std::cout << "Gumbo +1 Smarts." << std::endl;
      std::cout << "--------------------------------------------" << std::endl;
      std::cout << std::endl;
   }
   
   moveOn2();
   whitespace();
         
   return 0;
}

/**********************************************************************************
 *                         fail
 *
 * User missed the question...
 *********************************************************************************/
void Kitchen::fail()
{
   std::cout << "#######################################" << std::endl;
   std::cout << "Incorrect Response....                 " << std::endl;
   std::cout << "Gumbo freezes in confusion.            " << std::endl;
   std::cout << "The owner comes back and swats Gumbo   " << std::endl;
   std::cout << "with a broom.  Gumbo soils himself and " << std::endl;
   std::cout << "must run and hide.                     " << std::endl;
   std::cout << "GAME OVER...                           " << std::endl;
   std::cout << "#######################################" << std::endl;
}

