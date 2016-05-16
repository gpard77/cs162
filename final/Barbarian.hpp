/*******************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/29/15
 *
 * Description: Header File for Class Barbarian
 *   Class inherits from Fantasy_Man
 *******************************************************/
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Fantasy_Man.hpp"


class Barbarian : public Fantasy_Man
{
public:
   Barbarian();
   Barbarian(int, int, std::string);
   int attack();
   int defend();
};
#endif

