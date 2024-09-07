#include <iostream>

using namespace std;

// function Signature
void printCounting(int num)
// void ka matlab ye function kuch bhi return nahi karne vala hai
{
   // cout << n << endl;
   // function body
   for (int i = 1; i <= num; i++)
   {
      cout << i << " ";
   }
   cout << endl;
}

int main()
{
   int n;
   cin >> n;

   // function call
   printCounting(n);
}