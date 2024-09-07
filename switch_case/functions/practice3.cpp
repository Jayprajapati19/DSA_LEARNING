#include <iostream>
using namespace std;

// Function to count set bits in a number
int countSetBits(int num)
{
   int count = 0;
   while (num > 0)
   {
      count += num & 1;
      num >>= 1;
   }
   return count;
}

int main()
{
   int a, b;

   cout << "Enter the value of a: ";
   cin >> a;
   cout << "Enter the value of b: ";
   cin >> b;

   int totalSetBits = countSetBits(a) + countSetBits(b);

   cout << "Total number of set bits in " << a << " and " << b << " is: " << totalSetBits << endl;

   return 0;
}
