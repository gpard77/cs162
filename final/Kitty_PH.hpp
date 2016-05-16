/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT - RPG
 *   This is the header file for the Kitty_PH class.
 *   (Kitty Penthouse)
 *****************************************************/
#ifndef KITTY_PH_HPP
#define KITTY_PH_HPP

#include <string>


class Kitty_PH : public Room
{
protected:
   Room * Tree;
   //std::string name;
public:
   Kitty_PH();
   Kitty_PH(Gumbo);
   int story(Gumbo);
   int phChoice();
   int quit();
};
#endif

