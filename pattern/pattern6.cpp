#include <iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;

   int row = 1;
   while (row <= n)
   {
      int col = 1;
      while (col <= n)
      {
         char ch = 'A' + col + row - 2;
         cout << ch;
         col = col + 1;
      }
      cout << endl;
      row = row + 1;
   }
}

// ABCD
// BCDE
// CDEF
// DEFG