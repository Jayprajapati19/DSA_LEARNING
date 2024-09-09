#include <iostream>

using namespace std;

void dummy(int n)
{
   cout << " n is " << n << endl;
}

int main()
{
   int n;
   cin >> n;

   dummy(n);
   cout << "Number is " << n << endl;

   return 0;
}

// lec 9