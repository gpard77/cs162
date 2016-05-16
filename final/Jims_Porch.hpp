/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT - RPG
 *   This is the header file for the Jims_Porch class.
 *****************************************************/
#ifndef JIMS_PORCH_HPP
#define JIMS_PORCH_HPP

#include <string>


class Jims_Porch : public Room
{
protected:
   Room * Tree;
   Room * Under_House;
   std::string name;
public:
   Jims_Porch();
   Jims_Porch(Gumbo);
   int story(Gumbo);
   int porchChoice();
};
#endif

