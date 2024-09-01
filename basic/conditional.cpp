#include <iostream>
using namespace std;

int main()
{
   // int a;
   // cin >> a;

   // cout << "value of n is : " << n << endl;

   // if a is positive
   // if (a > 0)
   // {
   //    cout << "A is Pisitive " << endl;
   // }
   // else
   // {
   //    cout << "A is Negative" << endl;
   // }

   // int a, b;

   // cin >> a >> b;

   // a = cin.get();

   // a='1'-> 49 ASCII Value

   // cout << "Value of a and b is " << a << "value " << b << endl;

   // cout << "value of a is  : " << a << endl;

   /*
   int a, b;

   cout << "Enter The Value of a " << endl;
   cin >> a;

   cout << "ENter The Value of b " << endl;
   cin >> b;

   if (a > b)
   {
      cout << "A is Greter " << endl;
   }
   if (b > a)
   {
      cout << "B is Greter " << endl;
   }
   */

   /*
   int a;
   cout << "Enter The Value of A" << endl;
   cin >> a;

   if (a > 0)
   {
      cout << "A is Positive" << endl;
      cout << "Value of a is :" << a << endl;
   }
   else
   {
      if (a < 0)
      {
         cout << "A is Negative" << endl;
         cout << "Value of a is :" << a << endl;
      }
      else
      {
         cout << "A is 0" << endl;
         cout << "Value of a is :" << a << endl;
      }
   }
   // */

   // int a;
   // cout << "Enter the value of a" << endl;
   // cin >> a;

   // if (a < 0)
   // {
   //    cout << "A is Positive" << endl;
   // }
   // else if (a < 0)
   // {
   //    cout << "A is Negative" << endl;
   // }
   // else
   // {
   //    cout << "A is Zero" << endl;
   // }

   // int a = 9;
   // if (a == 9)
   // {
   //    cout << "NINEY" << endl;
   // }

   // if (a > 0)
   // {
   //    cout << "A is Positive" << endl;
   // }
   // else
   // {
   //    cout << "Negative" << endl;
   // }

   // +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   // home work
   // char ch;
   // 'a' to 'z' ->> this is lower case
   // 'A' to 'Z' ->> this is uppar case
   // '0' to '9' ->> this is number

#include <iostream>
   using namespace std;

   char ch;
   cout << "Enter a character: ";
   cin >> ch;

   if (ch >= 'a' && ch <= 'z')
   {
      cout << ch << " is a lowercase letter." << endl;
   }
   else if (ch >= 'A' && ch <= 'Z')
   {
      cout << ch << " is an uppercase letter." << endl;
   }
   else if (ch >= '0' && ch <= '9')
   {
      cout << ch << " is a number." << endl;
   }
   else
   {
      cout << ch << " is not an alphanumeric character." << endl;
   }
}
