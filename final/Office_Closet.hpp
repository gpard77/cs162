/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT - RPG
 *   This is the header file for the Office Closet class.
 *****************************************************/
#ifndef OFFICE_CLOSET_HPP
#define OFFICE_CLOSET_HPP

#include <string>


class Office_Closet : public Room
{
protected:
   Room * Living_Room;
   Room * Bathtub;
   std::string name;
public:
   Office_Closet();
   Office_Closet(Gumbo);
   int story(Gumbo);
};
#endif

