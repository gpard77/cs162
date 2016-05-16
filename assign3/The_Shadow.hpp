/*******************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/29/15
 *
 * Description: Header File for Class The_Shadow. 
 *   Class inherits from Fantasy_Man
 *******************************************************/
#ifndef THE_SHADOW_HPP
#define THE_SHADOW_HPP

#include "Fantasy_Man.hpp"


class The_Shadow : public Fantasy_Man
{
public:
   The_Shadow();
   The_Shadow(int, int, std::string);
   int attack();
   int defend();
   virtual void damage(Fantasy_Man *, Fantasy_Man *);
};
#endif

