#include <iostream>

using namespace std;

int main()
{
   // int num = 2;
   // char ch = 'a';

   char ch = '1';

   cout << endl;
   switch (ch)
   {
   case 1:
      cout << "First" << endl;
      break;

   case '1':
      cout << "Character one" << endl;
      break;

   default:
      cout << "It is default case" << endl;
   }
}