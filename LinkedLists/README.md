# Linked Lists

## Common Patterns

### 1. Two Pointers (Fast & Slow)
- **Use Case**: Cycle detection, finding middle node, nth node from end
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)
- **Example Problems**: Linked List Cycle, Middle of Linked List, Remove Nth Node From End

### 2. Reversal
- **Use Case**: Reverse entire list or portions, palindrome checking
- **Time Complexity**: O(n)
- **Space Complexity**: O(1) iterative, O(n) recursive
- **Example Problems**: Reverse Linked List, Reverse Nodes in k-Group

### 3. Merge
- **Use Case**: Combining sorted lists, sorting linked lists
- **Time Complexity**: O(n + m)
- **Space Complexity**: O(1)
- **Example Problems**: Merge Two Sorted Lists, Merge k Sorted Lists

### 4. Dummy Head
- **Use Case**: Simplifying edge cases, list manipulation
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)
- **Example Problems**: Remove Linked List Elements, Partition List

### 5. In-place Modification
- **Use Case**: Reordering, deleting nodes without extra space
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)
- **Example Problems**: Delete Node in Linked List, Reorder List

## Quick Reference

| Pattern | Time | Space | Key Technique |
|---------|------|-------|---------------|
| Fast & Slow Pointers | O(n) | O(1) | Move fast pointer 2x speed of slow |
| Reversal | O(n) | O(1) | Track prev, current, next pointers |
| Merge | O(n+m) | O(1) | Compare and link nodes |
| Dummy Head | O(n) | O(1) | Start with dummy node before head |
| In-place Modification | O(n) | O(1) | Modify pointers directly |

## Example Solutions

Solutions in this folder demonstrate these patterns with clear comments and complexity analysis.
