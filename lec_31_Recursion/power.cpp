#include <iostream>

using namespace std;

int power(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive relation
    // int smallerProb = power(n - 1);
    // int biggerProb = 2 * smallerProb;

    return 2 * power(n - 1);
}

int main()
{
    int n;
    cin >> n;

    int ans = power(n);
    cout << ans << endl;

    return 0;
}
