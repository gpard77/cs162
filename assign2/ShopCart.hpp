/*******************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/18/15
 *
 * Description: This is the Header file for ShoppingCart.cpp
 *******************************************************************/
#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP
#include "Item.hpp"
#include "clubPrice.hpp"
#include <vector>
#include <string>
using namespace std;

class ShoppingCart
{
private:
   vector<Item> cart;

public:
   void addItem(Item);
   void removeItem(int);
   void listContents();
   void simpleList();
   double totalPrice();
};
#endif
