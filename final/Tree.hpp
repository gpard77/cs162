/*****************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT - RPG
 *   This is the header file for the Tree class.
 *****************************************************/
#ifndef TREE_HPP
#define TREE_HPP

#include <string>


class Tree : public Room
{
protected:
   Room * Kitty_PH;
   Room * Jims_Porch;
   std::string name;
public:
   Tree();
   Tree(Gumbo);
   int story(Gumbo);
};
#endif

