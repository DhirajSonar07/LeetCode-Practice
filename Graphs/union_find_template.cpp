/*
 * Union Find (Disjoint Set) Template
 * Use for: Connected components, cycle detection, dynamic connectivity
 * Time Complexity: O(α(n)) amortized per operation
 * Space Complexity: O(n)
 */

#include <vector>
using namespace std;

class UnionFind {
private:
    vector<int> parent;
    vector<int> rank;
    int components;
    
public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        components = n;
        
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    // Find with path compression
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); // Path compression
        }
        return parent[x];
    }
    
    // Union by rank
    bool unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        
        if (rootX == rootY) {
            return false; // Already in same set
        }
        
        // Union by rank
        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
        
        components--;
        return true;
    }
    
    // Check if two elements are in same set
    bool connected(int x, int y) {
        return find(x) == find(y);
    }
    
    // Get number of connected components
    int getComponents() {
        return components;
    }
};

class Solution {
public:
    // Example: Number of connected components
    int countComponents(int n, vector<vector<int>>& edges) {
        UnionFind uf(n);
        
        for (auto& edge : edges) {
            uf.unite(edge[0], edge[1]);
        }
        
        return uf.getComponents();
    }
    
    // Example: Detect cycle in undirected graph
    bool hasCycle(int n, vector<vector<int>>& edges) {
        UnionFind uf(n);
        
        for (auto& edge : edges) {
            if (!uf.unite(edge[0], edge[1])) {
                return true; // Edge connects nodes already in same set (cycle)
            }
        }
        
        return false;
    }
};
