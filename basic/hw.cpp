#include <iostream>

using namespace std;

int main()
{

   char ch;
   cout << "Enter the character : " << endl;
   cin >> ch;

   if (ch >= 'a' && ch <= 'z')
   {
      cout << ch << "  is a lowercase" << endl;
   }
   else if (ch >= 'A' && ch <= 'Z')
   {
      cout << ch << "  is uppercase" << endl;
   }
   else if (ch >= '0' && ch <= '9')
   {
      cout << ch << "  is number" << endl;
   }
}