/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: Final Project -- RPG
 *   This class "Room" will serve as the base
 *   class for the project.  All other classes
 *   of Room will inherit from this class. 
 *   This is the implementation of the class.
 *****************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include "Room.hpp"


// Implementation for Class Room

Room::Room()
{
   forward = NULL;
   back = NULL;
   left = NULL;
   right = NULL;
}

Room::Room(Gumbo gumboIn)
{   
   forward = NULL;
   back = NULL;
   left = NULL;
   right = NULL;
}

Room * Room::changeForward()
{
   return forward;
}

// Set Foward Pointer
void Room::setForward(std::string forwardIn)
{
   forwardName = forwardIn;
}

// Get Foward Pointer
std::string Room::getForward()
{
   return forwardName;
}

// Set Back Pointer
void Room::setBack(std::string backIn)
{
   backName = backIn;
}

// Get Back Pointer
std::string Room::getBack()
{
   return backName;
}

// Set Left Pointer
void Room::setLeft(std::string leftIn)
{
   leftName = leftIn;
}

// Get Left Pointer
std::string Room::getLeft()
{
   return leftName;
}

// Set Right Pointer
void Room::setRight(std::string rightIn)
{
   rightName = rightIn;
}

// Get Right Pointer
std::string Room::getRight()
{
   return rightName;
}

// Set Name
void Room::setName(std::string nameIn)
{
   name = nameIn;
}

// Get Name
std::string Room::getName()
{
   return name;
}
/**********************************************************************
 *                  moveRoom
 *
 * Use pointers to navigate rooms
 *********************************************************************/
std::string Room::moveRoom(Room * roomIn, int selection)
{
   std::string temp;
 
   if (selection == 1)
   {
      temp = roomIn->getForward();
   }
   else if (selection == 2)
   {
      temp = roomIn->getBack();
   }
   else if (selection == 3)
   {
      temp = roomIn->getLeft();
   }
   else if (selection == 4)
   {
      temp = roomIn->getRight();
   }   
   return temp;
}

/************************************************************************
 *                          navMenu
 *
 * Displays Menu of User options
 ***********************************************************************/   
int navMenu(Room * roomIn)
{
   std::string roomName1, roomName2, roomName3, roomName4;
   int number;
   // Menu Display
   std::cout << "CHOOSE A PATH:" << std::endl;
   roomName1 = roomIn->getForward();
   std::cout << "1:  " << roomName1 << std::endl;
   roomName2 = roomIn->getBack();
   std::cout << "2:  " << roomName2 << std::endl;
   roomName3 = roomIn->getLeft();
   std::cout << "3:  " << roomName3 << std::endl;
   roomName4 = roomIn->getRight();
   std::cout << "4:  " << roomName4 << std::endl;
   std::cout << "-----------------" << std::endl;
   std::cout << "5:   Quit Game" << std::endl;

   std::cout << "Selection: ";
   std::cin >> number;

   std::string doubleCheck;
  
   while (doubleCheck != "CLOSED")
   {
      if (number == 1)
      {
         if (roomName1 == "CLOSED")
         {
            while (number == 1)
            {
               std::cout << "CLOSED! Pick Again: ";
               std::cin >> number;
               doubleCheck == roomName1;
            }
         }
         else
         {
            return number;
         }
      }
      else if (number == 2)
      {
         if (roomName2 == "CLOSED")
         {
            while (number == 2)
            {
               std::cout << "CLOSED! Pick Again: ";
               std::cin >> number;
               doubleCheck == roomName2;
            }
         }
         else
         {
            return number;
         }
      }
      else if (number == 3)
      { 
         if (roomName3 == "CLOSED")
         {
            std::cout << "CLOSED! Pick Again: ";
            std::cin >> number;
            doubleCheck == roomName3;
         }
         else
         {
            return number;
         }
      }
      else if (number == 4)
      {
         if (roomName4 == "CLOSED")
         {
            std::cout << "CLOSED! Pick Again: ";
            std::cin >> number;
            doubleCheck == roomName4;
         }
         else
         {
            return number;
         }
      }
      else if (number == 5)
      {
         return number;
      }
   }
}

/************************************************************************
 *                      moveOn2
 *
 *  This function progresses the story at a manageable speed.
 ************************************************************************/
char Room::moveOn2()
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
 *                      whitespace
 *
 * Add white space to clear screen
 *****************************************************************/
void Room::whitespace()
{
   std::cout << std::string(50, '\n');
}

/************************************************************************
 *                      moveOn3
 *
 *  This function progresses the story at a manageable speed.
 ************************************************************************/
char Room::moveOn3()
{
   char choice;

   std::cout << "Please Enter 'y' to try again.." << std::endl;

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
