#include <iostream>
using namespace std;

int main()
{
   int amount = 1330; // Default amount
   int hundreds = 0, fifties = 0, twenties = 0, ones = 0;
   int choice;

   cout << "Total amount: " << amount << endl;
   cout << "Choose a denomination to calculate:" << endl;
   cout << "1. 100 Rupees" << endl;
   cout << "2. 50 Rupees" << endl;
   cout << "3. 20 Rupees" << endl;
   cout << "4. 1 Rupee" << endl;

   cin >> choice;

   switch (choice)
   {
   case 1:
      hundreds = amount / 100;
      cout << "100 Rupee notes: " << hundreds << endl;
      break;

   case 2:
      fifties = (amount % 100) / 50;
      cout << "50 Rupee notes: " << fifties << endl;
      break;

   case 3:
      twenties = ((amount % 100) % 50) / 20;
      cout << "20 Rupee notes: " << twenties << endl;
      break;

   case 4:
      ones = ((amount % 100) % 50) % 20;
      cout << "1 Rupee notes: " << ones << endl;
      break;

   default:
      cout << "Invalid choice." << endl;
   }

   return 0;
}
