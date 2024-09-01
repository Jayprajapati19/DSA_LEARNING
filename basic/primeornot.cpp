#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;

   int i = 2;

   // jena koe na table ma na avtu hoy e prime only 1 and ana khud
   // % = 0 ave atle not prime

   while (i < n)
   {
      // divide hogya, not prime
      if (n % i == 0)

      {
         cout << "Not Prime for" << i << endl;
      }
      else
      {
         cout << "Prime for " << i << endl;
      }
      i = i + 1;
   }
}
