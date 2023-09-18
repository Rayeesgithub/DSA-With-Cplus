class Solution {
public:
    bool isValid(string s) {
         if (s[0] != 'a') {
            return false; // The string must start with 'a', otherwise it's invalid.
        }
        stack<char> st; // Stack to keep track of characters.

        for (char ch : s) {
            if (ch == 'a') {
                st.push(ch); // Push 'a' onto the stack.
            } else if (ch == 'b') {
                // If 'b' is encountered, it should be preceded by 'a'.
                if (!st.empty() && st.top() == 'a') {
                    st.push('b'); // Push 'b' onto the stack.
                } else {
                    return false; // Invalid sequence, as 'b' is not preceded by 'a'.
                }
            } else { // ch == 'c'
                // If 'c' is encountered, it should be preceded by 'b'.
                if (!st.empty() && st.top() == 'b') {
                    st.pop(); // Pop 'b' from the stack.
                    // Check if 'a' is also present before 'b'.
                    if (!st.empty() && st.top() == 'a') {
                        st.pop(); // Pop 'a' from the stack.
                    } 
                    else 
                        return false; // Invalid sequence, as 'a' is not before 'b'.
                    }
                 else 
                    return false; // Invalid sequence, as 'c' is not preceded by 'b'.
                
            }
        }
        return st.empty(); // If the stack is empty at the end, it's valid.
    }
};