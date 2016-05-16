/*************************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/18/15
 *
 * Description: Header File for clubPrice.cpp.  This is a 
 *  derived class from Item.
 **************************************************************/
#ifndef CLUBPRICE_HPP
#define CLUBPRICE_HPP

#include "Item.hpp"


class ClubPrice : public Item
{
public:
   double calcClubPrice(double);

};
#endif

