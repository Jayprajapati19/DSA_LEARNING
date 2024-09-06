#include <iostream>
using namespace std;

int main()
{
   int choice;

   while (true)
   {
      cout << "\n1. Print Hello" << endl;
      cout << "2. Print World" << endl;
      cout << "3. Exit" << endl;
      cout << "Enter your choice: ";
      cin >> choice;

      switch (choice)
      {
      case 1:
         cout << "Hello" << endl;
         break;
      case 2:
         cout << "World" << endl;
         break;
      case 3:
         cout << "Exiting..." << endl;
         return 0;
      default:
         cout << "Invalid choice, try again." << endl;
      }
   }

   return 0;
}
