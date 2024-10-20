#include <iostream>

// There is a lot to learn, Keep in mind “ Mnn bhot karega k chor yrr apne se nahi yoga ya maza nahi aara, Just ask 1 question “ Why I started ?

using namespace std;

int power(int a, int b)
{
    // base

    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    // recursive call
    int ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }

    // if b is odd
    else
    {
        return a * ans * ans;
    }

    // return ans;

    // 1. Base case: when b is 0, return 1
    // 2. Recursive case: power(a, b/2) * power(a, b/2) if b is even
    // 3. Recursive case: a * power(a, (b-1)/2) * power(a, (b-1)/2) if b is odd
}

int main()
{

    int a, b;

    cin >> a >> b;

    int ans = power(a, b);

    cout << "Answer is " << ans << endl;

    return 0;
}