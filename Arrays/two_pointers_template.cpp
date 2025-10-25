/*
 * Two Pointers Template
 * Use for: Finding pairs, triplets, or manipulating sorted arrays
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <vector>
using namespace std;

class Solution {
public:
    // Template for two pointers from both ends
    void twoPointersOpposite(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;
        
        while (left < right) {
            // Process current pair
            // Example: check if arr[left] + arr[right] meets condition
            
            // Move pointers based on condition
            // Replace 'false' with your actual condition
            if (false /* some condition */) {
                left++;
            } else {
                right--;
            }
        }
    }
    
    // Template for two pointers moving in same direction
    void twoPointersSameDirection(vector<int>& arr) {
        int slow = 0;
        int fast = 0;
        
        while (fast < arr.size()) {
            // Process element at fast pointer
            
            // Move fast pointer
            fast++;
            
            // Conditionally move slow pointer
            // Replace 'false' with your actual condition
            if (false /* some condition */) {
                slow++;
            }
        }
    }
};
