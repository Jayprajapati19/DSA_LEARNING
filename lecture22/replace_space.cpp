#include <iostream>

using namespace std;

namespace sample
{
    string replaceStringI(string &str)
    {
        string temp = "";

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ')
            {
                temp.push_back('@');
                temp.push_back('4');
                temp.push_back('0');
            }
            else
            {
                temp.push_back(str[i]);
            }
        }
        return temp;
    }
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string result = sample::replaceStringI(input);

    cout << "Modified string: " << result << endl;

    return 0;
}
