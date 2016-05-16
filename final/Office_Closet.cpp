/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG
 *   This is the implementation of the Office Closet class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include "Office_Closet.hpp"


// Implementation for Class Living Room

Office_Closet::Office_Closet()
{
   forward = Bathtub;
   back = Living_Room;
   left = NULL;
   right = NULL;

   setForward("Bathtub");
   setBack("Living Room");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Office Closet");
}

// Constructor with Gumbo arg.
Office_Closet::Office_Closet(Gumbo gumboIn)
{
   forward = Bathtub;
   back = Living_Room;
   left = NULL;
   right = NULL;

   setForward("Bathtub");
   setBack("Living Room");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Office Closet");
}

/********************************************************
 *              story
 *              
 * Story element for the Kitty Penthouse Room
 *******************************************************/
int Office_Closet::story(Gumbo gumboIn)
{
   std::cout << "---------------------------------------------------" << std::endl;
   std::cout << "THE OFFICE CLOSET:" << std::endl;
   std::cout << "Gumbo peers out into the room, the door open just" << std::endl;
   std::cout << "a crack.  He sees shadows moving back and forth--" << std::endl;
   std::cout << "doesn't know how he'll get out." << std::endl;
   std::cout << "---------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   std::cout << "--------------------------------------------------------" << std::endl;
   std::cout << "He hears the homeowner go into the upstairs bathroom" << std::endl;
   std::cout << "just next door. Gumbo can hear a bath being started." << std::endl;
   std::cout << "This is exactly what Gumbo needs to clean up!" << std::endl;
   std::cout << "Normally cats don't like baths.  But in this case, " << std::endl;
   std::cout << "a bath is all he needs to move onto the bed and prove" << std::endl;
   std::cout << "that he's clean enough to keep as a pet." << std::endl;
   std::cout << "--------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   std::cout << "----------------------------------------------------------" << std::endl;
   std::cout << "Suddenly, Gumbo hears a familiar growling in the closet" << std::endl;
   std::cout << "behind him --- STABBY!  But how?" << std::endl;
   std::cout << "----------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   std::cout << "MOVE ON TO TALK TO STABBY..." << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   std::cout << "-----------------------------------------------------------------------" << std::endl;
   std::cout << "\"Hello there old buddy.  YOu didn't think I'd let you have this place" << std::endl;
   std::cout << "all to yourself did you? Let's get this over with.\" Stabby flashes " << std::endl;
   std::cout << "his sharp tooth.  Gumbo hopes instinct takes over.  Again he closes" << std::endl;
   std::cout << "his eyes." << std::endl;
   std::cout << "-----------------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   std::cout << "-----------------------------------------------------------------------------" << std::endl;
   std::cout << "Will instinct take over?  Or will Stabby bite Gumbo?" << std::endl;
   std::cout << "Roll a die.  Stabby gets particularly bitey over 3(s) and 7(s)" << std::endl;
   std::cout << "Get 2 of those and Gumbo gets chomped!" << std::endl;
   std::cout << "-----------------------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   std::cout << "MOVE ON TO THROW A TEN SIDED DIE..." << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();

   int dice;
   int numFaces = 10;
   int counter = 0;
   int failNum = 5;
   while (counter < 2)
   {
      dice = rand() % numFaces + 1;
      if (dice != 3 || dice != 7)
      {
         std::cout << "Throw: " << dice << std::endl;
         std::cout << "****************************************************************" << std::endl;
         std::cout << "YOU DID IT -- Gumbo meows so loud even Stabby is startled.  " << std::endl;
         std::cout << "The homeowner rushes into the room a spots Stabby. " << std::endl;
         std::cout << "Stabby gets chased down the stairs..." << std::endl;
         std::cout << "****************************************************************" << std::endl;
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
   if (counter == 2)
   {
      std::cout << "************************************" << std::endl;
      std::cout << "Gumbo gets bitten by Stabby.." << std::endl;
      std::cout << "He shrieks and soils himself." << std::endl;
      std::cout << "Too dirty to continue." << std::endl;
      std::cout << "GAME OVER..." << std::endl;
      std::cout << "************************************" << std::endl;
      return failNum;
   }

   std::cout << "Gumbo has his opportunity to get into the bath!" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();

   return 0;
}



