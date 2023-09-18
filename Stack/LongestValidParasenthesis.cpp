class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<int> st; 
        int maxLen = 0; // Variable to store the maximum valid parentheses length
        st.push(-1); // Push -1 onto the stack as a base case
        
        // Loop through each character in the input string 's'
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(') {
                st.push(i); // Push the index of '(' character onto the stack
            } else {
                st.pop(); // Pop the top index from the stack (corresponding to the last '(')
                if (st.empty()) {
                    // If the stack is empty, push the current index onto the stack as a newbase case 
                 
               st.push(i);
                } else {
                    // Calculate the length of the valid parentheses substring ending at the current index
                    // by subtracting the top index from the current index
                    int len = i - st.top();
                    // Update 'maxLen' with the maximum length found so far
                    maxLen = max(len, maxLen);
                }
            }
        }
        return maxLen; // Return the maximum valid parentheses length
    }
};