/*
 * Stack Template
 * Use for: Monotonic stack, expression evaluation, backtracking
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 */

#include <vector>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    // Template for monotonic stack (next greater element)
    vector<int> nextGreaterElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1);
        stack<int> st; // Stack stores indices
        
        for (int i = 0; i < n; i++) {
            // Pop elements smaller than current
            while (!st.empty() && nums[st.top()] < nums[i]) {
                result[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }
        
        return result;
    }
    
    // Template for valid parentheses
    bool isValid(string s) {
        stack<char> st;
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                
                char top = st.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        
        return st.empty();
    }
    
    // Template for evaluating postfix expression
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                
                if (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else if (token == "/") st.push(a / b);
            } else {
                st.push(stoi(token));
            }
        }
        
        return st.top();
    }
};
