/**********************************************************************
 *
 *  Geoffrey Pard
 *  CS 162
 *  Date: 4/4/15
 *
 *  Description: Assignment 1 -- THE GAME OF LIFE
 ***********************************************************************/
 #include <iostream>
 #include <string>
 #include "patterns.cpp"
 #include "window.cpp"
 
 using namespace std;
 
int main()
{
   bool array[20][40];
   string next;
   int choice = 0;
   int xCoord = 0;
   int yCoord = 0;

   clear(array); // Initialize array

   
   // User Welcome
   cout << endl << endl;
   cout << "-----------------------"  << endl;
   cout << "***THE GAME OF LIFE ***"  << endl;
   cout << "-----------------------"  << endl;
   cout << endl << endl << endl;
   printMenu();  // User Menu of Options
   cin >> choice;
    
   do
   {
      if (choice == 1)
      {
         clear(array); // Reset Array

         // Set Position in the Window
         cout << endl;
         cout << "Set the Position of the Pattern " << endl;
         cout << "using X & Y coordinates." << endl;
         cout << "--------------------------------" << endl;
         cout << endl;
         cout << "Enter X: ";
         cin >> xCoord;
         cout << "Enter Y: ";
         cin >> yCoord;
         
         pattern1(array, xCoord, yCoord); // Fixed Simple Osciallator
         printFrame(array); // Plot Pattern onto Array
         forward(array); // Loop through generations
         printMenu(); // Menu after quit
         cin >> choice;

      }
      else if (choice == 2)
      {
         clear(array);  // Reset Array

         // Set Position in the Window
         cout << endl;
         cout << "Set the Position of the Pattern " << endl;
         cout << "using X & Y coordinates." << endl;
         cout << "--------------------------------" << endl;
         cout << endl;
         cout << "Enter X: ";
         cin >> xCoord;
         cout << "Enter Y: ";
         cin >> yCoord;

         pattern2(array, xCoord, yCoord);  // Glider 
         printFrame(array); // Plot Pattern onto Array
         forward(array);  // Loop through generations
         printMenu();  // Menu after quit
         cin >> choice;
      }
      else if (choice == 3)
      {
         clear(array);  // Reset Array
         pattern3(array); // Cannon
         printFrame(array);  // Plot Pattern onto Array
         forward(array); // Loop through generations
         printMenu(); // Menu after quit
         cin >> choice;
      }
   } while (choice != 4); // quit program

   cout << endl;

   return 0;
}
