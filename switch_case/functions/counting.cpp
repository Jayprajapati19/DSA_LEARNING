#include <iostream>

using namespace std;

// function Signature
void printCounting(int n)
// void ka matlab ye function kuch bhi return nahi karne vala hai
{
   // function body
   for (int i = 1; i <= n; i++)
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