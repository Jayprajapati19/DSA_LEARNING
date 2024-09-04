#include <iostream>
using namespace std;

// Dabangg pattern

int main()
{
   int n;
   cin >> n;

   for (int row = 1; row <= n; row++)
   {
      for (int i = 1; i <= n - row + 1; i++)
      {
         cout << i << " ";
      }

      for (int i = 1; i <= 2 * (row - 1); i++)
      {
         cout << "* ";
      }

      for (int i = n - row + 1; i >= 1; i--)
      {
         cout << i << " ";
      }

      cout << endl;
   }

   return 0;
}
