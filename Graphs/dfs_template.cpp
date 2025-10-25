/*
 * Graph DFS Template
 * Use for: Path finding, cycle detection, connected components
 * Time Complexity: O(V + E)
 * Space Complexity: O(V)
 */

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    // Template for DFS with adjacency list
    void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
        visited[node] = true;
        
        // Process current node
        // ...
        
        // Visit all neighbors
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, graph, visited);
            }
        }
    }
    
    // Template for finding connected components
    int numConnectedComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        
        // Build adjacency list
        for (auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        vector<bool> visited(n, false);
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, graph, visited);
                count++;
            }
        }
        
        return count;
    }
    
    // Template for cycle detection in undirected graph
    bool hasCycleDFS(int node, int parent, vector<vector<int>>& graph, vector<bool>& visited) {
        visited[node] = true;
        
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                if (hasCycleDFS(neighbor, node, graph, visited)) {
                    return true;
                }
            } else if (neighbor != parent) {
                // Found a back edge (cycle)
                return true;
            }
        }
        
        return false;
    }
    
    // Template for DFS with path tracking
    bool findPath(int node, int target, vector<vector<int>>& graph, 
                  vector<bool>& visited, vector<int>& path) {
        visited[node] = true;
        path.push_back(node);
        
        if (node == target) {
            return true;
        }
        
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                if (findPath(neighbor, target, graph, visited, path)) {
                    return true;
                }
            }
        }
        
        path.pop_back(); // Backtrack
        return false;
    }
};
