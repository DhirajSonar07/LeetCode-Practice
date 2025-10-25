/*
 * Graph BFS Template
 * Use for: Shortest path (unweighted), level-order exploration
 * Time Complexity: O(V + E)
 * Space Complexity: O(V)
 */

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    // Template for BFS with adjacency list
    void bfs(int start, vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> visited(n, false);
        queue<int> q;
        
        q.push(start);
        visited[start] = true;
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            
            // Process current node
            // ...
            
            // Visit all neighbors
            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }
    
    // Template for finding shortest path
    int shortestPath(int start, int end, vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> visited(n, false);
        queue<pair<int, int>> q; // {node, distance}
        
        q.push({start, 0});
        visited[start] = true;
        
        while (!q.empty()) {
            auto [node, dist] = q.front();
            q.pop();
            
            if (node == end) {
                return dist;
            }
            
            for (int neighbor : graph[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push({neighbor, dist + 1});
                }
            }
        }
        
        return -1; // No path found
    }
    
    // Template for level-order BFS
    vector<vector<int>> bfsLevels(int start, vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> visited(n, false);
        vector<vector<int>> levels;
        queue<int> q;
        
        q.push(start);
        visited[start] = true;
        
        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> currentLevel;
            
            for (int i = 0; i < levelSize; i++) {
                int node = q.front();
                q.pop();
                currentLevel.push_back(node);
                
                for (int neighbor : graph[node]) {
                    if (!visited[neighbor]) {
                        visited[neighbor] = true;
                        q.push(neighbor);
                    }
                }
            }
            
            levels.push_back(currentLevel);
        }
        
        return levels;
    }
};
