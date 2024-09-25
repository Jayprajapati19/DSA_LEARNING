#include <iostream>
#include <vector>
using namespace std;

// Function to reverse the string
void reverseString(vector<char> &s)
{
    int i = 0;
    int j = s.size() - 1;

    // Reverse the string
    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    // Define a string to be reversed
    vector<char> s = {'H', 'E', 'J', 'I', 'O'};

    // Display the original string
    cout << "Original string: ";
    for (char c : s)
    {
        cout << c;
    }
    cout << endl;

    // Reverse the string
    reverseString(s);

    // Display the reversed string
    cout << "Reversed string: ";
    for (char c : s)
    {
        cout << c;
    }

    return 0;
}
