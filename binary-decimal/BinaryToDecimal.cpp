#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int n;
   cin >> n;

   int i = 0;
   int answer = 0;

   while (n != 0)
   {
      int digit = n % 10;

      if (digit == 1)
      {
         answer = answer = pow(2, i);
      }
      n = n / 10;
      i++;
   }
   cout << answer << endl;
}

// D-> B >/2 divide by 2, &1 ->bit n>>1 -> right shift
// B-> D >digit power ko add 0->is not add
