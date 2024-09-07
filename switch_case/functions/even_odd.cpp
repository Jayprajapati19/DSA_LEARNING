#include <iostream>

using namespace std;

// 1-> Even
// 2-> odd

bool isEven(int a)
{
   if (a & 1)
   {
      return 0;
   }
   else
   { // even
      return 1;
   }
}

int main()

{
   int num;
   cin >> num;

   if (isEven(num))
   {
      cout << " Numner is Even" << endl;
   }
   else
      cout << " Numner is Odd" << endl;
}