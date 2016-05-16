/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT - RPG
 *   This is the header file for the Kitchen class.
 *****************************************************/
#ifndef KITCHEN_HPP
#define KITCHEN_HPP

#include <string>


class Kitchen : public Room
{
protected:
   Room * Bathroom;
   Room * Living_Room;
   std::string name;
public:
   Kitchen();
   Kitchen(Gumbo);
   int story(Gumbo);
   void fail();
};
#endif

