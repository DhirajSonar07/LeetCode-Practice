/*
 * Queue/BFS Template
 * Use for: Level-order traversal, shortest path problems
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

class Solution {
public:
    // Template for BFS in grid
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if (grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;
        
        vector<pair<int, int>> directions = {
            {-1, -1}, {-1, 0}, {-1, 1},
            {0, -1},           {0, 1},
            {1, -1},  {1, 0},  {1, 1}
        };
        
        queue<pair<int, int>> q;
        q.push({0, 0});
        grid[0][0] = 1; // Mark as visited
        int pathLength = 1;
        
        while (!q.empty()) {
            int size = q.size();
            
            for (int i = 0; i < size; i++) {
                auto [row, col] = q.front();
                q.pop();
                
                if (row == n - 1 && col == n - 1) {
                    return pathLength;
                }
                
                for (auto [dr, dc] : directions) {
                    int newRow = row + dr;
                    int newCol = col + dc;
                    
                    if (newRow >= 0 && newRow < n && 
                        newCol >= 0 && newCol < n && 
                        grid[newRow][newCol] == 0) {
                        q.push({newRow, newCol});
                        grid[newRow][newCol] = 1; // Mark as visited
                    }
                }
            }
            
            pathLength++;
        }
        
        return -1;
    }
    
    // Template for multi-source BFS
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int freshCount = 0;
        queue<pair<int, int>> q;
        
        // Add all rotten oranges to queue
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1) {
                    freshCount++;
                }
            }
        }
        
        if (freshCount == 0) return 0;
        
        int minutes = 0;
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        while (!q.empty()) {
            int size = q.size();
            
            for (int i = 0; i < size; i++) {
                auto [row, col] = q.front();
                q.pop();
                
                for (auto [dr, dc] : directions) {
                    int newRow = row + dr;
                    int newCol = col + dc;
                    
                    if (newRow >= 0 && newRow < m && 
                        newCol >= 0 && newCol < n && 
                        grid[newRow][newCol] == 1) {
                        grid[newRow][newCol] = 2;
                        freshCount--;
                        q.push({newRow, newCol});
                    }
                }
            }
            
            minutes++;
        }
        
        return freshCount == 0 ? minutes - 1 : -1;
    }
};
