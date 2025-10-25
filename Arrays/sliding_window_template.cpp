/*
 * Sliding Window Template
 * Use for: Subarray/substring problems with constraints
 * Time Complexity: O(n)
 * Space Complexity: O(k) where k is window size or character set
 */

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    // Template for fixed-size sliding window
    int fixedSlidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        int windowSum = 0;
        int result = 0;
        
        // Build first window
        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
        result = windowSum;
        
        // Slide the window
        for (int i = k; i < n; i++) {
            windowSum += arr[i] - arr[i - k];
            result = max(result, windowSum);
        }
        
        return result;
    }
    
    // Template for variable-size sliding window
    int variableSlidingWindow(vector<int>& arr) {
        int left = 0;
        int right = 0;
        int result = 0;
        unordered_map<int, int> window;
        
        while (right < arr.size()) {
            // Expand window by including arr[right]
            window[arr[right]]++;
            right++;
            
            // Contract window while condition is violated
            // Replace 'false' with your actual condition
            while (false /* window violates condition */) {
                window[arr[left]]--;
                if (window[arr[left]] == 0) {
                    window.erase(arr[left]);
                }
                left++;
            }
            
            // Update result with valid window
            result = max(result, right - left);
        }
        
        return result;
    }
};
