#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
private:
    // Function to check if a move is safe
    bool isSafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &maze)
    {
        if (x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && maze[x][y] == 1)
        {
            return true;
        }
        return false;
    }

    // Recursive function to solve the maze
    void solveMaze(vector<vector<int>> &maze, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited, string path)
    {
        // Base case: If destination is reached
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        // Mark the current cell as visited
        visited[x][y] = 1;

        // Move Down
        if (isSafe(x + 1, y, n, visited, maze))
        {
            solveMaze(maze, n, ans, x + 1, y, visited, path + 'D');
        }

        // Move Left
        if (isSafe(x, y - 1, n, visited, maze))
        {
            solveMaze(maze, n, ans, x, y - 1, visited, path + 'L');
        }

        // Move Right
        if (isSafe(x, y + 1, n, visited, maze))
        {
            solveMaze(maze, n, ans, x, y + 1, visited, path + 'R');
        }

        // Move Up
        if (isSafe(x - 1, y, n, visited, maze))
        {
            solveMaze(maze, n, ans, x - 1, y, visited, path + 'U');
        }

        // Backtrack: Unmark the current cell as visited
        visited[x][y] = 0;
    }

public:
    // Function to find all possible paths in the maze
    vector<string> findPath(vector<vector<int>> &maze, int n)
    {
        vector<string> ans;
        if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0) // If start or end is blocked
        {
            return ans;
        }

        vector<vector<int>> visited(n, vector<int>(n, 0)); // Initialize visited array
        string path = "";                                  // String to store the path

        solveMaze(maze, n, ans, 0, 0, visited, path); // Start solving the maze

        sort(ans.begin(), ans.end()); // Sort the paths
        return ans;
    }
};

int main()
{
    Solution sol;
    int n = 4;
    vector<vector<int>> maze = {{1, 0, 0, 0},
                                {1, 1, 0, 1},
                                {0, 1, 0, 0},
                                {1, 1, 1, 1}};

    vector<string> result = sol.findPath(maze, n);

    if (result.empty())
    {
        cout << "No path found" << endl;
    }
    else
    {
        for (string path : result)
        {
            cout << path << endl;
        }
    }

    return 0;
}
