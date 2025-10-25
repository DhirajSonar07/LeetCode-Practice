/*
 * Dynamic Programming Template - Knapsack
 * Use for: Subset sum, partition problems, coin change
 * Time Complexity: O(n * capacity)
 * Space Complexity: O(n * capacity) or O(capacity) with optimization
 */

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Template for 0/1 Knapsack
    int knapsack01(vector<int>& weights, vector<int>& values, int capacity) {
        int n = weights.size();
        vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));
        
        for (int i = 1; i <= n; i++) {
            for (int w = 0; w <= capacity; w++) {
                // Don't take item i
                dp[i][w] = dp[i-1][w];
                
                // Take item i (if it fits)
                if (weights[i-1] <= w) {
                    dp[i][w] = max(dp[i][w], 
                                   dp[i-1][w - weights[i-1]] + values[i-1]);
                }
            }
        }
        
        return dp[n][capacity];
    }
    
    // Template for 0/1 Knapsack (space optimized)
    int knapsack01Optimized(vector<int>& weights, vector<int>& values, int capacity) {
        int n = weights.size();
        vector<int> dp(capacity + 1, 0);
        
        for (int i = 0; i < n; i++) {
            // Traverse backwards to avoid using updated values
            for (int w = capacity; w >= weights[i]; w--) {
                dp[w] = max(dp[w], dp[w - weights[i]] + values[i]);
            }
        }
        
        return dp[capacity];
    }
    
    // Template for Unbounded Knapsack (can use item multiple times)
    int unboundedKnapsack(vector<int>& weights, vector<int>& values, int capacity) {
        vector<int> dp(capacity + 1, 0);
        
        for (int i = 0; i < weights.size(); i++) {
            // Traverse forwards to allow reusing items
            for (int w = weights[i]; w <= capacity; w++) {
                dp[w] = max(dp[w], dp[w - weights[i]] + values[i]);
            }
        }
        
        return dp[capacity];
    }
    
    // Template for Coin Change (minimum coins)
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;
        
        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (coin <= i) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        
        return dp[amount] > amount ? -1 : dp[amount];
    }
    
    // Template for Subset Sum (boolean)
    bool canPartition(vector<int>& nums, int target) {
        vector<bool> dp(target + 1, false);
        dp[0] = true;
        
        for (int num : nums) {
            for (int j = target; j >= num; j--) {
                dp[j] = dp[j] || dp[j - num];
            }
        }
        
        return dp[target];
    }
};
