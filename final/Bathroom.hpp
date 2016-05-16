/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT - RPG
 *   This is the header file for the Bathroom class.
 *****************************************************/
#ifndef BATHROOM_HPP
#define BATHROOM_HPP

#include <string>


class Bathroom : public Room
{
protected:
   Room * Kitchen;
   Room * Under_House;
   std::string name;
public:
   Bathroom();
   Bathroom(Gumbo);
   int story(Gumbo);
};
#endif

