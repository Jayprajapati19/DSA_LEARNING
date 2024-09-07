#include <iostream>

using namespace std;

// 1 ->Prime
// 0 -> not a prime

bool isPrime(int n)
{
   for (int i = 2; i <= n; i++)
   {
      // divide ho gya hai, hot a prime number
      if (n % i == 0)
      {
         return 0;
      }
      return 1;
   }
}

int main()
{
   int n;
   cin >> n;

   if (isPrime(n))
   {
      cout << "Is a Prime Number" << endl;
   }
   else
      cout << "Is a Not Prime Number" << endl;
}

// A/P => ( 3* n + 7)
// n=3 => 3*3+7 =16

// ++++++++++++++++++++++++++++++++++++++

// int a, b o/p total number of set bits in a and b
// a=2, b=3
// 010   011
// number of 1 = 3

// +++++++++++++++++++++

// fibonacci nth fibonnaci
