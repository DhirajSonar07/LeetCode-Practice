/*
 * Dynamic Programming Template - 1D
 * Use for: Sequence problems, climbing stairs, house robber
 * Time Complexity: O(n)
 * Space Complexity: O(n) or O(1) with optimization
 */

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Template for 1D DP
    int dpTemplate(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        
        vector<int> dp(n);
        
        // Base cases
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        // Fill DP table
        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
        }
        
        return dp[n-1];
    }
    
    // Template with space optimization (O(1) space)
    int dpOptimized(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        
        int prev2 = nums[0];
        int prev1 = max(nums[0], nums[1]);
        
        for (int i = 2; i < n; i++) {
            int curr = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = curr;
        }
        
        return prev1;
    }
    
    // Template for climbing stairs
    int climbStairs(int n) {
        if (n <= 2) return n;
        
        int prev2 = 1; // 1 way to climb 1 stair
        int prev1 = 2; // 2 ways to climb 2 stairs
        
        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        
        return prev1;
    }
};
