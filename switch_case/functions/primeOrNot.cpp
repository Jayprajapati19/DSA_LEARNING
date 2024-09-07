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