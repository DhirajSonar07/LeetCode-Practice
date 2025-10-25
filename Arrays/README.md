# Arrays

## Common Patterns

### 1. Two Pointers
- **Use Case**: Finding pairs, removing duplicates, sorted array problems
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)
- **Example Problems**: Two Sum (sorted), Container With Most Water, Remove Duplicates

### 2. Sliding Window
- **Use Case**: Subarrays/substrings with constraints, max/min length problems
- **Time Complexity**: O(n)
- **Space Complexity**: O(1) to O(k)
- **Example Problems**: Maximum Sum Subarray, Longest Substring Without Repeating Characters

### 3. Prefix Sum
- **Use Case**: Range sum queries, subarray sum problems
- **Time Complexity**: O(n) for preprocessing, O(1) for queries
- **Space Complexity**: O(n)
- **Example Problems**: Subarray Sum Equals K, Range Sum Query

### 4. Binary Search
- **Use Case**: Searching in sorted arrays, finding boundaries
- **Time Complexity**: O(log n)
- **Space Complexity**: O(1)
- **Example Problems**: Search in Rotated Sorted Array, Find First and Last Position

### 5. Kadane's Algorithm
- **Use Case**: Maximum subarray sum problems
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)
- **Example Problems**: Maximum Subarray, Maximum Product Subarray

## Quick Reference

| Pattern | Time | Space | Key Technique |
|---------|------|-------|---------------|
| Two Pointers | O(n) | O(1) | Start/end pointers moving toward each other |
| Sliding Window | O(n) | O(k) | Expand/contract window based on condition |
| Prefix Sum | O(n) | O(n) | Precompute cumulative sums |
| Binary Search | O(log n) | O(1) | Divide search space in half |
| Kadane's Algorithm | O(n) | O(1) | Track current and max sum |

## Example Solutions

Solutions in this folder demonstrate these patterns with clear comments and complexity analysis.
