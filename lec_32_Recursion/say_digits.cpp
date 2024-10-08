// Problem -->>
// I/P:  1 9 3
// O/P: one nine three

#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{

    // base case
    if (n == 0)
    {
        return;
    }

    // processing
    int digit = n % 10;
    n /= 10;

    // recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";
}

int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    sayDigit(n, arr);

    return 0;
}