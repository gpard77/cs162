/*******************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/29/15
 *
 * Description: Header File for Class Goblin. 
 *   Class inherits from Fantasy_Man
 *******************************************************/
#ifndef GOBLIN_HPP
#define GOBLIN_HPP

#include "Fantasy_Man.hpp"


class Goblin : public Fantasy_Man
{
public:
   Goblin();
   Goblin(int, int, std::string);
   int attack();
   int defend();
   void damage(Fantasy_Man * thing1, Fantasy_Man * thing2);
   void damage(Fantasy_Man * thing1, Goblin * thing2);

};
#endif

