/*
 * Binary Tree DFS Template
 * Use for: Tree traversal, path problems, tree properties
 * Time Complexity: O(n)
 * Space Complexity: O(h) where h is height
 */

#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // Template for preorder traversal (Root -> Left -> Right)
    void preorderTraversal(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;
        
        result.push_back(root->val);        // Process root
        preorderTraversal(root->left, result);  // Process left
        preorderTraversal(root->right, result); // Process right
    }
    
    // Template for inorder traversal (Left -> Root -> Right)
    void inorderTraversal(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;
        
        inorderTraversal(root->left, result);   // Process left
        result.push_back(root->val);        // Process root
        inorderTraversal(root->right, result);  // Process right
    }
    
    // Template for postorder traversal (Left -> Right -> Root)
    void postorderTraversal(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;
        
        postorderTraversal(root->left, result);  // Process left
        postorderTraversal(root->right, result); // Process right
        result.push_back(root->val);         // Process root
    }
    
    // Template for finding maximum depth
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        
        return 1 + max(leftDepth, rightDepth);
    }
    
    // Template for path sum problems
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        
        // Leaf node check
        if (root->left == nullptr && root->right == nullptr) {
            return root->val == targetSum;
        }
        
        // Recurse on children with reduced sum
        int remaining = targetSum - root->val;
        return hasPathSum(root->left, remaining) || 
               hasPathSum(root->right, remaining);
    }
};
