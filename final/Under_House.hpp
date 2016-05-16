/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT - RPG
 *   This is the header file for the Under_House class
 *****************************************************/
#ifndef UNDER_HOUSE_HPP
#define UNDER_HOUSE_HPP

#include <string>


class Under_House : public Room
{
protected:
   Room * Jims_Porch;
   Room * Bathroom;
   std::string name;
public:
   Under_House();
   Under_House(Gumbo);
   int story(Gumbo);
};
#endif

