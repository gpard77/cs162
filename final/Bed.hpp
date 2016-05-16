/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT - RPG
 *   This is the header file for the Bed class.
 *****************************************************/
#ifndef BED_HPP
#define BED_HPP

#include <string>


class Bed : public Room
{
protected:
   Room * Bathtub;
   std::string name;
public:
   Bed();
   Bed(Gumbo);
   int story(Gumbo);
};
#endif

