/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT - RPG
 *   This class "Room" will serve as the base
 *   class for the project.  All other classes
 *   of Room will inherit from this class. 
 *   This is the header file.
 *****************************************************/
#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>

class Gumbo; // Forward declarations
class Item;

class Room
{
protected:
   Room * forward;
   Room * back;
   Room * left;
   Room * right;
   std::string name;
   std::string forwardName;
   std::string backName;
   std::string leftName;
   std::string rightName;
public:
   Room();
   Room(Gumbo);
   Room * changeForward();
   //Room * createRoom(std::string);
   void setForward(std::string);
   std::string getForward();
   void setBack(std::string);
   std::string getBack();
   void setLeft(std::string);
   std::string getLeft();
   void setRight(std::string);
   std::string getRight();
   void setName(std::string);
   std::string getName();
   virtual int story(Gumbo) = 0;
   //virtual int gamble() = 0;
   std::string moveRoom(Room *, int);
   int navMenu(Room *);
   void whitespace();
   char moveOn2();
   char moveOn3();
};
#endif

