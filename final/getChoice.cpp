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
   while (choice < 1 || choice > 10)
   {
      cout << "The only valid choices are 1-10." << endl;
      cout << "Please re-enter: ";
      cin >> choice;
   }
   return choice;
}
