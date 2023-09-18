lass MinStack {
public:
    vector<pair<int,int>> st; // A vector of pairs to store values and their corresponding minimums
    
    MinStack() {
        // Constructor to initialize the MinStack
    }
    
    void push(int val) {
        if (st.empty()) {
            // If the stack is empty, create a pair with the same value as the minimum
            pair<int, int> p;
            p.first = val; // Value
            p.second = val; // Minimum value
            st.push_back(p);
        } else {
            // If the stack is not empty, create a pair with the value and the minimum of the current minimum and the new value
            pair<int, int> p;
            p.first = val; // Value
            p.second = min(st.back().second, val); // Minimum value
            st.push_back(p);
        }
    }
    
    void pop() {
        st.pop_back(); // Remove the top element from the stack
    }
    
    int top() {
        return st.back().first; // Return the value of the top element
    }
    
    int getMin() {
        return st.back().second; // Return the minimum value stored in the top element
    }
};