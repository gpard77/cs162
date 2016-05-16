/***************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 6/4/15
 *
 * Description: FINAL PROJECT -- RPJ
 *   This is the header file for the Item Class.
 *   Things that Gumbo can use.
 **************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item
{
private:
   std::string itemName;
public:
   Item();
   Item(std::string);
   void setItemName(std::string);
   std::string getItemName();
};
#endif

