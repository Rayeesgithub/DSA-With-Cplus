#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// Approach 1: Reverse the queue using a stack
void reverse(queue<int>& q) {
    stack<int> st;

    // Step 1: Push elements from the queue to the stack
    while (!q.empty()) {
        int element = q.front();  // Get the front element of the queue
        q.pop();                 // Remove the front element from the queue
        st.push(element);        // Push the element onto the stack
    }

    // Step 2: Pop elements from the stack and push them back to the queue
    while (!st.empty()) {
        int element = st.top();  // Get the top element of the stack
        st.pop();                // Pop the top element from the stack
        q.push(element);         // Push the element back onto the queue
    }
}

// Approach 2: Reverse the queue using recursion
void RecursiveReverse(queue<int>& q) {
    stack<int> st;

    // Base case: If the queue is empty, return
    if (q.empty()) {
        return;
    }

    // Recursive step:
    int element = q.front();  // Get the front element of the queue
    q.pop();                 // Remove the front element from the queue

    // Recursively reverse the remaining elements in the queue
    RecursiveReverse(q);

    // Backtrack: Push the removed element back to the queue
    q.push(element);
}

int main() {
    queue<int> q;

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // Reverse the queue using either approach
    // reverse(q);  // Uncomment this line to use Approach 1
    RecursiveReverse(q);  // Uncomment this line to use Approach 2

    cout << "Reverse elements:";
    while (!q.empty()) {
        cout << q.front() << " ";  // Print the front element of the queue
        q.pop();                   // Remove the front element from the queue
    }

    return 0;
}
