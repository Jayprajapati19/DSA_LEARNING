#include <iostream>

using namespace std;

int main()

// n = (n-1)+(n+2)

{

   /*


    int n = 10;
    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    {
       int nextNumber = a + b;
       cout << nextNumber << " ";
       a = b;
       b = nextNumber;
    }
   */

   // prime number

   // number ki range ke bitch me jo jo aye use jisko chaeck karna hai prime or not  raminder is 0 (n%0)

   int n;
   cout << "enter the value of n" << endl;
   cin >> n;

   bool isPrime = 1;

   for (int i = 2; i < n; i++)
   {
      // rem =0, Not a Prime number
      if (n % i == 0)
      {
         // cout << "Not a Prime Number" << endl;
         isPrime = 0;
         break;
      }
   }

   if (isPrime == 0)
   {
      cout << " Not a Prime Number " << endl;
   }
   else
   {
      cout << " is a prime number " << endl;
   }
}