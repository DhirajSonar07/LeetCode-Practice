# LeetCode-Practice

A structured repository for DSA (Data Structures and Algorithms) and LeetCode practice in C++. This repository is organized by core topics with comprehensive pattern guides, complexity analysis, and starter templates.

## 📁 Repository Structure

### Core Topics

Each topic folder contains:
- **README.md**: Comprehensive guide covering common patterns, time/space complexity analysis, and problem-solving strategies
- **Templates**: C++ starter code for common problem types with detailed comments

| Topic | Description | Key Patterns |
|-------|-------------|--------------|
| **[Arrays](./Arrays)** | Array manipulation and searching | Two Pointers, Sliding Window, Binary Search, Prefix Sum |
| **[Strings](./Strings)** | String processing and pattern matching | Two Pointers, Sliding Window, Hash Maps, KMP |
| **[LinkedLists](./LinkedLists)** | Linked list operations | Fast & Slow Pointers, Reversal, Merge, Dummy Head |
| **[Trees](./Trees)** | Binary tree and BST problems | DFS, BFS, Recursion, BST Properties |
| **[Stacks](./Stacks)** | Stack-based algorithms | Monotonic Stack, Expression Evaluation |
| **[Queues](./Queues)** | Queue and deque operations | BFS, Priority Queue, Monotonic Queue |
| **[Graphs](./Graphs)** | Graph traversal and algorithms | DFS, BFS, Union Find, Dijkstra, Topological Sort |
| **[DP](./DP)** | Dynamic programming patterns | 1D/2D DP, Knapsack, State Machine, Interval DP |

## 🚀 Getting Started

### C++ Templates Available

Each topic folder includes ready-to-use C++ templates:

**Arrays:**
- `two_pointers_template.cpp` - For pair finding and array manipulation
- `sliding_window_template.cpp` - For subarray problems
- `binary_search_template.cpp` - For searching in sorted arrays

**LinkedLists:**
- `linked_list_template.cpp` - For list operations and cycle detection

**Trees:**
- `dfs_template.cpp` - For tree traversal and recursion
- `bfs_template.cpp` - For level-order problems

**Stacks/Queues:**
- `stack_template.cpp` - For monotonic stack and expression evaluation
- `bfs_template.cpp` - For BFS and multi-source BFS

**Graphs:**
- `dfs_template.cpp` - For graph traversal and pathfinding
- `bfs_template.cpp` - For shortest path problems
- `union_find_template.cpp` - For connected components

**DP:**
- `dp_1d_template.cpp` - For sequence problems
- `dp_2d_template.cpp` - For grid and two-sequence problems
- `knapsack_template.cpp` - For subset and optimization problems

## 📖 How to Use

1. **Navigate to a topic folder** to explore patterns and strategies
2. **Read the README** to understand common patterns and their complexity
3. **Use starter templates** as a foundation for solving problems
4. **Practice problems** from LeetCode organized by the same patterns

## 💡 Pattern Recognition Guide

When approaching a new problem:

1. **Identify the data structure**: Array, String, LinkedList, Tree, Graph?
2. **Look for key indicators**:
   - Sorted array → Binary Search
   - Subarray/substring → Sliding Window
   - Parentheses/brackets → Stack
   - Shortest path → BFS
   - Connected components → Union Find/DFS
   - Optimization with overlapping subproblems → DP
3. **Choose the appropriate template** from the relevant folder
4. **Adapt the template** to your specific problem

## 🎯 Complexity Analysis

Each pattern includes typical time and space complexity:
- Most array operations: **O(n)** time, **O(1)** space
- Binary search: **O(log n)** time
- Graph algorithms: **O(V + E)** time
- Dynamic programming: **O(n)** to **O(n²)** time

## 📚 Contributing

Feel free to add your own solutions following the established structure:
- Use clear variable names and comments
- Include complexity analysis in comments
- Follow the existing template style

## 🔗 Resources

- [LeetCode](https://leetcode.com/)
- [NeetCode Roadmap](https://neetcode.io/roadmap)
- [Tech Interview Handbook](https://www.techinterviewhandbook.org/)

---

Happy Coding! 🚀
