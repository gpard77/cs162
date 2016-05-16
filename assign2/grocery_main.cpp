/***********************************************************************
 *
 * Geoffrey Pard
 * CS 162 - 400
 * Date: 4/18/15
 *
 * Description: Assignment 2 -- Grocery Project.  Main function allows
 *  a user to navigate some of the basic tasks of the grocery experience
 *************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include "Item.cpp"
#include "ShopCart.cpp"
#include "clubPrice.cpp"

using namespace std;

// Function Prototypes for menu
int getChoice();
void printMenu();

/******************************************************************
 *                          main
 *******************************************************************/
int main()
{
   ShoppingCart user_cart; // Create Shopping Cart object
  
   int choice = 0; //Menu variable
   string nameIn;
   int quantityIn;
   double priceIn;
   string unitsIn;

   // User Welcome
   cout << endl;
   cout << "*************************************" << endl;
   cout << "     ASSIGNMENT 2: GROCERY CART      " << endl;
   cout << "*************************************" << endl;
   cout << endl << endl << endl;

   // Is Patron a Club Member?
   char member;
   cout << "Does the Patron have a Club Card? (y/n): ";
   cin >> member;         

   // Display Menu of Options
   cout << endl << endl;
   printMenu();

   do
   {
      choice = getChoice(); // Assign choice the value returned
                            // by getChoice function
      if (choice != 5)
      {
         char discount;

         // Allows user to Add items to cart
         if (choice == 1)
         {
            // Check to see if this Item gets the discount
            if (member == 'y' || member == 'Y')
            {
               cout << "Is this Item eligible for the Club Discount? (y/n): ";
               cin >> discount;
            }               
          
            ClubPrice tempItem;  // ClubPrice object inherits all Item methods
            cout << "Name of Item: ";
            cin.ignore();
            getline(cin, nameIn);
            cout << "Price of Item: ";
            while (!(cin >> priceIn))
            {
               cout << "Please Enter in format (0.00): " << endl;
               cin.clear();
               cin.ignore(100, '\n');
            }
            cout << "Quantity of Item: ";
            while (!(cin >> quantityIn))
            {
               cout << "Please Enter a Whole Number: " << endl;
               cin.clear();
               cin.ignore(100, '\n');
            }
            cout << "Type of Units: ";
            cin >> unitsIn;
            // Set Values of New Item
            tempItem.setName(nameIn);
            if (discount == 'y' || discount == 'Y') // Check to see if discount applies
            {
               priceIn = tempItem.calcClubPrice(priceIn);
               tempItem.setPrice(priceIn);
            }
            else
            {
               tempItem.setPrice(priceIn);
            }
            tempItem.setQuantity(quantityIn);
            tempItem.setUnits(unitsIn);
            // Push Item into Shopping Cart (vector)
            user_cart.addItem(tempItem);
            cout << endl;
            printMenu();
         }
         // List the contents of the cart
         else if (choice == 2)
         {
            user_cart.listContents();
            cout << endl;
            printMenu();
         }
         // Calculate total cost for items in the cart
         else if (choice == 3)
         {
            user_cart.totalPrice();
            cout << endl;
            printMenu();
         }
         else if (choice == 4)
         {
            // erase item code
            int remove = 0;
            cout << endl;
            user_cart.simpleList();
            cout << endl;
            cout << "Enter Number of Item to be removed: ";
            cin >> remove;
            user_cart.removeItem(remove);
            cout << endl;
            printMenu();
         }
      }
   } while (choice !=5);  // Quit the program

   return 0;
}

/************************************************************************
 *                          printMenu
 *
 * Displays Menu of User options
 ***********************************************************************/   
void printMenu()
{
   // Menu Display
   cout << "CHOOSE FROM THE FOLLOWING OPTIONS:" << endl;
   cout << "1: Add New Item" << endl;
   cout << "2: List Contents in Cart" << endl;
   cout << "3: Calculate Total Price of Cart" << endl;
   cout << "4: Remove Item" << endl;
   cout << "5: Quit the program" << endl;
   cout << endl;
}   

/************************************************************************
 *                      getChoice
 *
 *  This function validates the user's menu selection
 ************************************************************************/
int getChoice()
{
   int choice;

   while (!(cin >> choice))
   {
      cout << "Must be a number: " << endl;
      cin.clear();
      cin.ignore(100, '\n');
   }   
   while (choice < 1 || choice > 5)
   {
      cout << "The only valid choices are 1-5." << endl;
      cout << "Please re-enter: ";
      cin >> choice;
   }
   return choice;
}
