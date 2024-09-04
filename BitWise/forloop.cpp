#include <iostream>

using namespace std;

int main()
{

   int n;
   cout << "Enter The Value of n" << endl;
   cin >> n;

   cout << "printing count form 1 to n " << endl;

   /*
   int i = 1;
       for (;;) // initilaization, condition, incc/decc
   {
   if (i <= n)
   {
   cout << i << endl;
      }
   else
   {
      break;
}

i++;
}
     */

   for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1; a--, b--, c--)
   {
      cout << a << " " << b << " " << c << endl;
   }
}