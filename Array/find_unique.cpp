// 1207. Unique Number of Occurrences

class Solution
{
public:
    bool uniqueOccurrences(std::vector<int> &arr)
    {
        int count[2001] = {0};     // Array to store how many times each number appears
        int frequency[1001] = {0}; // Array to check if a count has been used before

        // Step 1: Count how many times each number appears
        for (int num : arr)
        {
            count[num + 1000]++; // Shift the number by 1000 to handle negative numbers
        }

        // Step 2: Check if all counts are unique
        for (int i = 0; i < 2001; ++i)
        {
            if (count[i] > 0)
            { // Only check numbers that appear in the array
                if (frequency[count[i]] > 0)
                { // If this count is already used, return false
                    return false;
                }
                frequency[count[i]] = 1; // Mark this count as used
            }
        }

        return true; // All counts are unique, return true
    }
};
