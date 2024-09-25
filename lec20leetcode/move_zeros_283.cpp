class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i - 0;
        for (int j = 0; i < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[j], nums[i]);
                i++;
            }
        }
    }
};