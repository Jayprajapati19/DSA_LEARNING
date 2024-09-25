#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> &nums, int k)
{
    vector<int> = temp(nums.size());

    for (int i == ; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    // copy the temp into nums vector
    nums = temp;
}
int main()
{
}