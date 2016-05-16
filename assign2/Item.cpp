/***********************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/18/15
 *
 * Description: Implementation for Item.hpp
 ***********************************************************/
#include <iostream>
#include <string>
#include "Item.hpp"

using namespace std;


Item::Item()
{
   setName("");
   setPrice(0.0);
   setQuantity(0);
   setUnits("");
}

Item::Item(string nameIn, double priceIn, int quantityIn, string unitsIn)
{
   setName(nameIn);
   setPrice(priceIn);
   setQuantity(quantityIn);
   setUnits(unitsIn);
}

void Item::setName(string nameIn)
{
   name = nameIn;
}

string Item::getName()
{
   return name;
}

void Item::setPrice(double priceIn)
{
   price = priceIn;
}

double Item::getPrice()
{
   return price;
}

void Item::setQuantity(int quantityIn)
{
   quantity = quantityIn;
}

int Item::getQuantity()
{
   return quantity;
}

void Item::setUnits(string unitsIn)
{
   units = unitsIn;
}

string Item::getUnits()
{
   return units;
}

