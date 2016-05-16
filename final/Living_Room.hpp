/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT - RPG
 *   This is the header file for the Living Room class.
 *****************************************************/
#ifndef LIVING_ROOM_HPP
#define LIVING_ROOM_HPP

#include <string>


class Living_Room : public Room
{
protected:
   Room * Kitchen;
   Room * Office_Closet;
   std::string name;
public:
   Living_Room();
   Living_Room(Gumbo);
   int story(Gumbo);
};
#endif

