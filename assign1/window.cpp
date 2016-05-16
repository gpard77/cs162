/*********************************************************************
 *
 *  Geoffrey Pard
 *  CS 162
 *  Date: 4/4/15
 *  
 *  Description: Implementation for Window.hpp
 *********************************************************************/
#include <iostream>
#include "window.hpp"
using namespace std;


/*********************************************************************
 *                         checkCell
 *
 * This method evaluates each cell based on the rules that govern
 *  The Game of Life sequence
 ********************************************************************/
void checkCell(bool array[20][40])
{
   int count = 0; // counts up based on true statements
   int row = 20; 
   int col = 40;

   // create a copy of the array to 
   // update cell progression
   bool tempArray[row][col];


   // Evaluate the so-called surrounding neighborhoods 
   // (cells) to see if any are switched on (true)
   // True statements will be used for calculations.
   // It checks up, down, left, right, & diagonal corners
   for (int i = 0; i < row ; i++)
   {
      for (int j = 0; j < col ; j++)
      {
         if ( (i+1) < row && array[i + 1][j] == true )
	 {
	    count++;
	 }
	 if ( (i-1) >= 0 && array[i - 1][j] == true )
	 {
	    count++;
	 }
	 if ( (j+1) < col && array[i][j+1] == true )
	 {
	    count++;
	 }
	 if ( (j-1) >= 0 && array[i][j-1] == true )
	 {
	    count++;
	 }
	 if ( (i+1) < row && (j+1) < col && array[i+1][j+1] == true )
	 {
	    count++;
	 }
	 if ( (i+1) < row && (j-1) >= 0 && array[i+1][j-1] == true )
	 {
	    count++;
	 }
	 if ( (i-1) >= 0 && (j+1) < col && array[i-1][j+1] == true )
	 {
	    count++;
	 }
	 if ( (i-1) >= 0 && (j-1) >= 0 && array[i-1][j-1] == true )
	 {
	    count++;
	 }
         // Gliding Patterns Exit Bottom of the Visible Window
         if ((i+1) == (row - 1))
         {
            array[i][j] = 0;
         }

         // RESULTS
         // Less than 2, Greater than 3  equals DEATH! (false)
	 if (count < 2 || count > 3)
	 {
	    tempArray[i][j] = false;
	 }
         // Equals 2 -- state remains unchanged
	 else if (count == 2)
	 {
	    tempArray[i][j] = array[i][j];
	 }
         // Equals 3 -- Birth or Regeneration 
	 else if (count == 3)
	 {
	    tempArray[i][j] = true;
	 }

	 count = 0;

      }
   }

   // After Evaluation, Copy the temp array
   // to the active array
   for (int i = 0 ; i < row ; i++ )
   {
      for (int j = 0 ; j < col ; j++ )
      {
         array[i][j] = tempArray[i][j];
      }
   }
}

/**************************************************************
 *                 printFrame
 *
 * This method prints the current array when called.
 *************************************************************/
void printFrame(bool array[20][40])
{
   int row = 20;
   int col = 40;

   for (int i = 0; i < row ; i++ )
   {
      for (int j = 0 ; j < col ; j++ )
      {
         if ( array[i][j] == true )
	 {
	    cout << "x";
	 }
	 else
	 {
	    cout << " ";
	 }

	 if ( (j + 1) >= col )
	 {
	    cout << endl;
	 }
      }
   }
}
/*************************************************************
 *                  printMenu
 *
 * List a menu of options for the User
 ************************************************************/
void printMenu()
{
   // Menu Display
   cout << "CHOOSE FROM THE FOLLOWING PATTERNS:" << endl;
   cout << "1:  Fixed Simple Oscillator" << endl;
   cout << "2:  Glider" << endl;
   cout << "3:  Cannon" << endl;
   cout << "4:  Quit the Program" << endl;
   cout << endl;
}   
/***********************************************************
 *                  getChoice
 *
 * Validate Menu selection
 **********************************************************/
int getChoice()
{
   int choice;

   while (!(cin >> choice))
   {
      cout << "Must be a number: " << endl;
      cin.clear();
      cin.ignore(100, '\n');
   }   
   while (choice < 1 || choice > 4)
   {
      cout << "The only valid choices are 1-4." << endl;
      cout << "Please re-enter: ";
      cin >> choice;
   }
   return choice;
}
/*********************************************************
 *                  forward
 *
 * Loops through cell progression until the user decides
 * to quit.
 ********************************************************/   
void forward(bool array[20][40])
{
   string next;   
   
   do 
   {
      next = "";
      cout << "Enter \"y\" to progress a generation: anything else quits. ";
      cin >> next;
      cout << endl;
      checkCell(array); // Function to evaluate cells
      printFrame(array); // Function to print updated array
      cout << endl;
   } while (next == "y");
}
/***********************************************************
 *                   clear
 *
 * This method resets the array when the user opts to start
 * a new pattern.
 ***********************************************************/   
void clear(bool array[20][40])
{
   for (int i = 0; i < 20; i++)
      {
         for (int j = 0; j < 40; j++)
         { 
            array[i][j] = false; // Switch all cells off
         }
      }
}
