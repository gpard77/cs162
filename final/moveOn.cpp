/************************************************************************
 *                      moveOn
 *
 *  This function progresses a battle to the next round
 ************************************************************************/
char moveOn()
{
   char choice;

   cout << "Please Enter 'y' to move on..." << endl;

   while (!(cin >> choice))
   {
      cout << "Must Enter 'y': " << endl;
      cin.clear();
      cin.ignore(100, '\n');
   }

   if (choice == 'y' || choice == 'Y')
   {
      cout << "" << endl;
   }
   else
   {
      while (choice != 'y' || choice != 'Y')
      {
         cout << "Please Enter 'y' to continue..." << endl;
      }
   }   
   return choice;
}
