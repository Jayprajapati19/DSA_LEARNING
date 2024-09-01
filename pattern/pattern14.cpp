#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;

   int row = 1;
   while (row <= n)
   {
      // space print karlo
      int space = n - row;
      while (space)
      {
         cout << " ";
         space = space - 1;
      }

      // number print karlo
      int col = 1;
      while (col <= row)
      {
         cout << row << " "; // Print the current row number
         col = col + 1;
      }
      cout << endl;
      row = row + 1;
   }

   return 0;
}
