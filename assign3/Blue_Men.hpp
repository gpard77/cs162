/*******************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/29/15
 *
 * Description: Header File for Class Blue_Men. 
 *   Class inherits from Fantasy_Man
 *******************************************************/
#ifndef BLUE_MEN_HPP
#define BLUE_MEN_HPP

#include "Fantasy_Man.hpp"


class Blue_Men : public Fantasy_Man
{
public:
   Blue_Men();
   Blue_Men(int, int, std::string);
   int attack();
   int defend();
};
#endif

