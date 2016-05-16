/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG
 *   This is the implementation of the Living Room class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include "Living_Room.hpp"


// Implementation for Class Living Room

Living_Room::Living_Room()
{
   forward = Office_Closet;
   back = Kitchen;
   left = NULL;
   right = NULL;

   setForward("Office Closet");
   setBack("Kitchen");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Living Room");
}

// Constructor with Gumbo arg.
Living_Room::Living_Room(Gumbo gumboIn)
{
   forward = Office_Closet;
   back = Kitchen;
   left = NULL;
   right = NULL;

   setForward("Office Closet");
   setBack("Kitchen");
   setLeft("CLOSED");
   setRight("CLOSED");

   setName("Living Room");
}

/********************************************************
 *              story
 *              
 * Story element for the Kitty Penthouse Room
 *******************************************************/
int Living_Room::story(Gumbo gumboIn)
{
   std::cout << "-------------------------------------------------------------" << std::endl;
   std::cout << "THE LIVING ROOM:" << std::endl;
   std::cout << "Gumbo takes a moment to imagine his life resting in this" << std::endl;
   std::cout << "living room.  No more cold or wet nights!" << std::endl;
   std::cout << "The living room would be prize enough, but Gumbo wants" << std::endl;
   std::cout << "the cushy bed upstairs.  He'll have to clean up for that." << std::endl;
   std::cout << "-------------------------------------------------------------" << std::endl;
   moveOn2();
   whitespace();
   std::cout << "--------------------------------------------------------------" << std::endl;
   std::cout << "Gumbo hears the back door close; the homeowner has returned!" << std::endl;
   std::cout << "He starts to panic and scurries about looking for a place" << std::endl;
   std::cout << "to hide.  He notices a Pot Belly stove--big enough for him" << std::endl;
   std::cout << "to hide in.  Unfortunately, Gumbo is puzzled easily." << std::endl;
   std::cout << "He'll have to use a smart point to make sure it's not on!" << std::endl;
   std::cout << "--------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   std::cout << "MOVE ON TO USE A SMART POINT..." << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
  
   gumboIn.setSmarts(1);
   gumboIn.tale_of_tape(gumboIn);
   std::cout << std::endl;
   moveOn2();
   whitespace();

   std::cout << "----------------------------------------------------------------" << std::endl;
   std::cout << "The homeowner is wandering back and forth collecting garments" << std::endl;
   std::cout << "to put in a load of laundry. Gumbo knows he has to get upstairs" << std::endl;
   std::cout << "and incrementally work his way to the bed.  He just used up" << std::endl;
   std::cout << "a smart point so he'll have shut his eyes and go at random" << std::endl;
   std::cout << "again.  He'll get three tries to do it." << std::endl;
   std::cout << "---------------------------------------------------------------" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();
   std::cout << "GET AN EVEN NUMBER!" << std::endl;
   std::cout << std::endl;
   moveOn2();
   whitespace();

   int dice;
   int numFaces = 6;
   int counter = 0;
   int failNum = 5;
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
      return failNum;
   }

   std::cout << "------------------------------------------------------------" << std::endl;
   std::cout << "The homeowner moves to the laudnry room and Gumbo sprints" << std::endl;
   std::cout << "up the stairs.  He spots an open closet." << std::endl;
   std::cout << "------------------------------------------------------------" << std::endl;
   std::cout << std::endl;

   moveOn2();
   whitespace();

   return 0;
}



