# Trees

## Common Patterns

### 1. Depth-First Search (DFS)
- **Use Case**: Path problems, tree traversal, subtree problems
- **Time Complexity**: O(n)
- **Space Complexity**: O(h) where h is height
- **Example Problems**: Maximum Depth, Path Sum, Invert Binary Tree

### 2. Breadth-First Search (BFS)
- **Use Case**: Level-order traversal, shortest path in tree, level-based problems
- **Time Complexity**: O(n)
- **Space Complexity**: O(w) where w is max width
- **Example Problems**: Level Order Traversal, Right Side View, Zigzag Level Order

### 3. Binary Search Tree (BST)
- **Use Case**: Search, insertion, validation in BST
- **Time Complexity**: O(log n) average, O(n) worst
- **Space Complexity**: O(h)
- **Example Problems**: Validate BST, Kth Smallest Element, Lowest Common Ancestor

### 4. Recursion
- **Use Case**: Tree construction, subtree problems, tree properties
- **Time Complexity**: O(n)
- **Space Complexity**: O(h)
- **Example Problems**: Construct Tree from Traversal, Diameter of Tree, Balanced Binary Tree

### 5. Iterative Traversal
- **Use Case**: Inorder/Preorder/Postorder without recursion
- **Time Complexity**: O(n)
- **Space Complexity**: O(h)
- **Example Problems**: Binary Tree Inorder Traversal, Morris Traversal

## Quick Reference

| Pattern | Time | Space | Key Technique |
|---------|------|-------|---------------|
| DFS | O(n) | O(h) | Preorder/Inorder/Postorder recursion |
| BFS | O(n) | O(w) | Queue for level-by-level traversal |
| BST Operations | O(log n) | O(h) | Leverage sorted property |
| Recursion | O(n) | O(h) | Base case + recursive calls |
| Iterative Traversal | O(n) | O(h) | Stack for DFS simulation |

## Example Solutions

Solutions in this folder demonstrate these patterns with clear comments and complexity analysis.
