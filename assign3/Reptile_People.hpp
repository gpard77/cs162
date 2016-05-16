/*******************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/29/15
 *
 * Description: Header File for Class Reptile_People. 
 *   Class inherits from Fantasy_Man
 *******************************************************/
#ifndef REPTILE_PEOPLE_HPP
#define REPTILE_PEOPLE_HPP

#include "Fantasy_Man.hpp"


class Reptile_People : public Fantasy_Man
{
public:
   Reptile_People();
   Reptile_People(int, int, std::string);
   int attack();
   int defend();
};
#endif

