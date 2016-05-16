/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT - RPG
 *   This is the header file for the Bathtub class.
 *****************************************************/
#ifndef BATHTUB_HPP
#define BATHTUB_HPP

#include <string>


class Bathtub : public Room
{
protected:
   Room * Office_Closet;
   Room * Bed;
   std::string name;
public:
   Bathtub();
   Bathtub(Gumbo);
   int story(Gumbo);
   int guessNum();
};
#endif

