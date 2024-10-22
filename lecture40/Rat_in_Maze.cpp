#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
private:
    // Ye function check karta hai ki move safe hai ya nahi
    bool isSafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &maze)
    {
        // Agar x aur y maze ke andar hain, visited nahi hai, aur maze me path hai toh safe hai
        if (x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && maze[x][y] == 1)
        {
            return true; // Safe hai
        }
        return false; // Safe nahi hai
    }

    // Ye function maze ko recursively solve karta hai
    void solveMaze(vector<vector<int>> &maze, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited, string path)
    {
        // Base case: Agar destination (n-1, n-1) par pahunch gaye
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path); // Path ko ans list me add karo
            return;
        }

        // Current cell ko visited mark kar do
        visited[x][y] = 1;

        // Niche move karo (Down)
        if (isSafe(x + 1, y, n, visited, maze))
        {
            solveMaze(maze, n, ans, x + 1, y, visited, path + 'D'); // Path me 'D' add karo
        }

        // Left move karo
        if (isSafe(x, y - 1, n, visited, maze))
        {
            solveMaze(maze, n, ans, x, y - 1, visited, path + 'L'); // Path me 'L' add karo
        }

        // Right move karo
        if (isSafe(x, y + 1, n, visited, maze))
        {
            solveMaze(maze, n, ans, x, y + 1, visited, path + 'R'); // Path me 'R' add karo
        }

        // Upar move karo (Up)
        if (isSafe(x - 1, y, n, visited, maze))
        {
            solveMaze(maze, n, ans, x - 1, y, visited, path + 'U'); // Path me 'U' add karo
        }

        // Backtrack: Jo cell visited mark kiya tha usko wapas 0 kar do
        visited[x][y] = 0;
    }

public:
    // Ye function sab possible paths find karega maze me
    vector<string> findPath(vector<vector<int>> &maze, int n)
    {
        vector<string> ans;                             // Result store karne ke liye
        if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0) // Agar start ya end block ho toh
        {
            return ans; // Koi path nahi hai
        }

        vector<vector<int>> visited(n, vector<int>(n, 0)); // Visited array initialize karo
        string path = "";                                  // Path ko empty string se shuru karo

        solveMaze(maze, n, ans, 0, 0, visited, path); // Maze ko solve karna shuru karo

        sort(ans.begin(), ans.end()); // Paths ko sort karo
        return ans;                   // Sorted paths return karo
    }
};

int main()
{
    Solution sol;
    int n = 4;
    vector<vector<int>> maze = {{1, 0, 0, 0},
                                {1, 1, 0, 1},
                                {0, 1, 0, 0},
                                {1, 1, 1, 1}}; // Maze define kiya

    vector<string> result = sol.findPath(maze, n); // Solution find karo

    if (result.empty()) // Agar koi path nahi mila
    {
        cout << "No path found" << endl; // Print karo ki koi path nahi mila
    }
    else
    {
        for (string path : result) // Sab paths ko print karo
        {
            cout << path << endl;
                }
    }

    return 0;
}
