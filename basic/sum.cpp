#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;

   int i = 1;
   int sum = 0;

   while (i <= n)
   {
      sum = sum + i;
      i = i + 1;
   }
   cout << "Value os sum is : " << sum << endl;
}

// 1 to n find sum of all even number

#include <iostream>
using namespace std;

int main()
{
   int n, sum = 0;

   cout << "Enter the value of n: ";
   cin >> n;

   for (int i = 2; i <= n; i += 2)
   {
      sum += i;
   }

   cout << "The sum of all even numbers from 1 to " << n << " is: " << sum << endl;

   return 0;
}

// Ferhnheiht to calciues tabel