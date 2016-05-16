/*****************************************************************
 *
 * Geoffrey Pard
 * CS 161 - 405
 * Date: 2/18/15
 *
 * Description: This program allows a user to add items to their
 *  shopping cart.  It will prompt the user for information about
 *  each item and when the user is finished adding items, it will
 *  compute the final cost.
 ****************************************************************/
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "ShopCart.hpp"
#include "Item.hpp"
using namespace std;


/*******************************************************************
 *                       addItem
 *   
 * This method allows the user to add an item to their cart
 *******************************************************************/
void ShoppingCart::addItem(Item tempItem)
{
    cart.push_back(tempItem);
}

/******************************************************************
 *                       listContents
 *
 * This method allows the user to view all of the items in their
 * cart.
 ******************************************************************/
void ShoppingCart::listContents()
{
   cout <<    "***********************************" << endl;
   for (unsigned int i = 0; i < cart.size(); i++)
   {
      cout << fixed << showpoint << setprecision(2);
      cout << "Item: " << cart[i].getName() << endl;
      cout << "Price: $" << cart[i].getPrice() << " per " << cart[i].getUnits() << endl;
      cout << "Quantity: " << cart[i].getQuantity() << endl;
      cout << "Units: " << cart[i].getUnits() << endl;
      cout << "Item Subtotal: $" << cart[i].getPrice() * cart[i].getQuantity() << endl;
      cout << "-----------------------------------" << endl;
   }
}

/****************************************************************
 *                   totalPrice
 *
 * This method returns the total price of items in the User's
 * shopping cart.
 ****************************************************************/
double ShoppingCart::totalPrice()
{
   //int contentsIn = cart.size();
   double cartTotal = 0;

   for (unsigned int i = 0; i < cart.size(); i++)
   {
      cartTotal += (cart[i].getPrice() * cart[i].getQuantity());
   }
   cout << fixed << showpoint << setprecision(2);
   cout << "**********************************************" << endl;
   cout << "Total Price for Items in Cart: $ " << cartTotal << endl;
   cout << "**********************************************" << endl;
   cout << endl;
   return cartTotal;
}

/*************************************************************************
 *                        removeItem
 *
 * This method allows the user to remove an item from their list
 ************************************************************************/
void ShoppingCart::removeItem(int itemNum)
{
   cart.erase(cart.begin() + (itemNum - 1));
}

/*************************************************************************
 *                        simpleList
 *
 * This method displays only an ordinal list of items on user's list
 *************************************************************************/
void ShoppingCart::simpleList()
{
   for (unsigned int i = 0; i < cart.size(); i++)
   {
      cout << (i+1) << ": " << cart[i].getName() << endl;
   }
}


