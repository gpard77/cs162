/***************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date 6/4/15
 *
 * Description: FINAL PROJECT -- RPG
 *    Implementation for the Item Class
 *    Things that Gumbo can use
 ***************************************************/
#include <iostream>
#include "Item.hpp"


// Item Class Implementation

Item::Item()
{
   setItemName("");
}

// Item Constructor with string arg.
Item::Item(std::string nameIn)
{
   setItemName(nameIn);
}

// Set Item Name
void Item::setItemName(std::string nameIn)
{
   itemName = nameIn;
}

// Get Item Name
std::string Item::getItemName()
{
   return itemName;
}

