# Queues

## Common Patterns

### 1. Breadth-First Search (BFS)
- **Use Case**: Level-order traversal, shortest path, multi-source BFS
- **Time Complexity**: O(n)
- **Space Complexity**: O(n)
- **Example Problems**: Binary Tree Level Order, Shortest Path in Binary Matrix, Rotting Oranges

### 2. Sliding Window with Deque
- **Use Case**: Maximum/minimum in window, optimized window queries
- **Time Complexity**: O(n)
- **Space Complexity**: O(k)
- **Example Problems**: Sliding Window Maximum, Longest Continuous Subarray

### 3. Priority Queue (Heap)
- **Use Case**: K largest/smallest elements, merge problems, scheduling
- **Time Complexity**: O(n log k)
- **Space Complexity**: O(k)
- **Example Problems**: Kth Largest Element, Merge k Sorted Lists, Task Scheduler

### 4. Monotonic Queue
- **Use Case**: Optimizing sliding window problems
- **Time Complexity**: O(n)
- **Space Complexity**: O(k)
- **Example Problems**: Sliding Window Maximum, Shortest Subarray with Sum at Least K

## Quick Reference

| Pattern | Time | Space | Key Technique |
|---------|------|-------|---------------|
| BFS | O(n) | O(n) | Process nodes level by level |
| Deque Window | O(n) | O(k) | Add/remove from both ends |
| Priority Queue | O(n log k) | O(k) | Maintain k elements in heap |
| Monotonic Queue | O(n) | O(k) | Maintain order in window |

## Example Solutions

Solutions in this folder demonstrate these patterns with clear comments and complexity analysis.
