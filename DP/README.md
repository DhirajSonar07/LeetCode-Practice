# Dynamic Programming (DP)

## Common Patterns

### 1. 1D DP
- **Use Case**: Sequence problems, climbing stairs, house robber
- **Time Complexity**: O(n)
- **Space Complexity**: O(n) or O(1) with optimization
- **Example Problems**: Climbing Stairs, House Robber, Decode Ways

### 2. 2D DP
- **Use Case**: Grid problems, two sequences, matrix paths
- **Time Complexity**: O(n * m)
- **Space Complexity**: O(n * m) or O(m) with optimization
- **Example Problems**: Unique Paths, Longest Common Subsequence, Edit Distance

### 3. Knapsack (0/1 and Unbounded)
- **Use Case**: Subset sum, partition problems, resource allocation
- **Time Complexity**: O(n * capacity)
- **Space Complexity**: O(n * capacity) or O(capacity)
- **Example Problems**: Partition Equal Subset Sum, Coin Change, Target Sum

### 4. Interval DP
- **Use Case**: Problems on subarrays/substrings, merge intervals
- **Time Complexity**: O(n²) or O(n³)
- **Space Complexity**: O(n²)
- **Example Problems**: Longest Palindromic Substring, Burst Balloons, Minimum Cost Tree

### 5. State Machine DP
- **Use Case**: Problems with states/transitions, stock buying
- **Time Complexity**: O(n * k) where k is number of states
- **Space Complexity**: O(n * k) or O(k)
- **Example Problems**: Best Time to Buy and Sell Stock series

### 6. DP on Trees
- **Use Case**: Tree structure optimization problems
- **Time Complexity**: O(n)
- **Space Complexity**: O(n)
- **Example Problems**: House Robber III, Binary Tree Maximum Path Sum

### 7. Digit DP
- **Use Case**: Counting numbers with specific properties
- **Time Complexity**: O(log n * states)
- **Space Complexity**: O(log n * states)
- **Example Problems**: Count Numbers with Unique Digits

## Quick Reference

| Pattern | Time | Space | Key Technique |
|---------|------|-------|---------------|
| 1D DP | O(n) | O(n) | dp[i] depends on previous states |
| 2D DP | O(n*m) | O(n*m) | dp[i][j] from adjacent cells |
| Knapsack | O(n*W) | O(n*W) | Include/exclude item decision |
| Interval DP | O(n²-n³) | O(n²) | dp[i][j] for range [i,j] |
| State Machine | O(n*k) | O(n*k) | Track state transitions |
| Tree DP | O(n) | O(n) | Bottom-up from leaves |
| Digit DP | O(log n) | O(log n) | Build numbers digit by digit |

## Example Solutions

Solutions in this folder demonstrate these patterns with clear comments and complexity analysis.
