/*******************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/29/15
 *
 * Description: Header File for Class The_Shadow_Op. 
 *   Class inherits from Fantasy_Man
 *******************************************************/
#ifndef THE_SHADOW_OP_HPP
#define THE_SHADOW_OP_HPP

#include "Fantasy_Man.hpp"


class The_Shadow_Op : public Fantasy_Man
{
public:
   The_Shadow_Op();
   The_Shadow_Op(int, int, std::string);
   int attack();
   int defend();
   virtual void damage(Fantasy_Man *, The_Shadow_Op *);
};
#endif

