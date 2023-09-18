class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
         vector<int> LL; // Vector to store the values of the linked list nodes
        while (head) {
            LL.push_back(head->val); // Push the value of the current node to the vector
            head = head->next; // Move to the next node
        }
        
        stack<int> st; // Stack to store indices of LL vector
        vector<int> ans(LL.size()); // Vector to store the next larger elements
        
        for (int i = 0; i < LL.size(); i++) {
            while (!st.empty() && LL[i] > LL[st.top()]) {
                // While the stack is not empty and the current element in LL is greater
                // than the element at the index stored in the top of the stack
                int kid = st.top(); // Get the index of the smaller element from the stack
                st.pop(); // Pop the index from the stack
                ans[kid] = LL[i]; // Set the next larger element for the smaller element
            }
            st.push(i); // Push the current index to the stack
        }
        
        return ans; // Return the vector containing the next larger elements
    }
};