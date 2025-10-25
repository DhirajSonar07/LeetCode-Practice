# Graphs

## Common Patterns

### 1. Depth-First Search (DFS)
- **Use Case**: Path finding, cycle detection, connected components
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)
- **Example Problems**: Number of Islands, Clone Graph, Course Schedule

### 2. Breadth-First Search (BFS)
- **Use Case**: Shortest path (unweighted), level-based problems
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)
- **Example Problems**: Word Ladder, Shortest Path in Binary Matrix, Network Delay Time

### 3. Union Find (Disjoint Set)
- **Use Case**: Connected components, cycle detection, dynamic connectivity
- **Time Complexity**: O(α(n)) amortized per operation
- **Space Complexity**: O(V)
- **Example Problems**: Number of Connected Components, Redundant Connection, Accounts Merge

### 4. Topological Sort
- **Use Case**: Dependency resolution, ordering problems
- **Time Complexity**: O(V + E)
- **Space Complexity**: O(V)
- **Example Problems**: Course Schedule, Alien Dictionary, Sequence Reconstruction

### 5. Dijkstra's Algorithm
- **Use Case**: Shortest path in weighted graphs
- **Time Complexity**: O((V + E) log V) with priority queue
- **Space Complexity**: O(V)
- **Example Problems**: Network Delay Time, Path with Minimum Effort, Cheapest Flights

### 6. Minimum Spanning Tree
- **Use Case**: Connecting all nodes with minimum cost
- **Time Complexity**: O(E log E) for Kruskal's
- **Space Complexity**: O(V)
- **Example Problems**: Min Cost to Connect All Points, Optimize Water Distribution

## Quick Reference

| Pattern | Time | Space | Key Technique |
|---------|------|-------|---------------|
| DFS | O(V+E) | O(V) | Recursive or stack-based exploration |
| BFS | O(V+E) | O(V) | Queue-based level exploration |
| Union Find | O(α(n)) | O(V) | Path compression + union by rank |
| Topological Sort | O(V+E) | O(V) | Kahn's algorithm or DFS |
| Dijkstra | O((V+E)log V) | O(V) | Priority queue with distances |
| MST | O(E log E) | O(V) | Kruskal's or Prim's algorithm |

## Example Solutions

Solutions in this folder demonstrate these patterns with clear comments and complexity analysis.
