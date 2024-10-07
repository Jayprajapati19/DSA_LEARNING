#include <iostream>
#include <vector>

using namespace std;

class solution
{
public:
    // solve using XOR Operaotr (^)
    int simgleNumber(vector<int> &nums)
    {
        int n = (int)nums.size();
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            a = a ^ nums[i];
        }
        return a;
    }
};