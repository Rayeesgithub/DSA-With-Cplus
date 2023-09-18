#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// Function to reverse the first 'k' elements of a queue
void reverseKElements(queue<int>& q, int k) {
    stack<int> s;

    // Step 1: Push the first 'k' elements from the queue to a stack
    int n = q.size();  // Get the size of the queue
    if (k == 0 || k > n) {
        return;  // Nothing to reverse or 'k' is greater than the queue size
    }
    int count = 0;
    while (!q.empty()) {
        int element = q.front();  // Get the front element of the queue
        q.pop();                 // Remove the front element from the queue
        s.push(element);        // Push the element onto the stack
        count++;
        if (count == k) {
            break;  // We've pushed 'k' elements, so break
        }
    }

    // Step 2: Pop elements from the stack and push them back to the queue
    while (!s.empty()) {
        int element = s.top();  // Get the top element of the stack
        s.pop();                // Pop the top element from the stack
        q.push(element);        // Push the element back onto the queue
    }

    // Step 3: Rotate the remaining elements (n-k) to maintain order
    count = 0;
    while (!q.empty()) {
        int temp = q.front();  // Get the front element of the queue
        q.pop();               // Remove the front element from the queue
        q.push(temp);          // Push the element back onto the queue
        count++;
        if (count == n - k && n - k != 0) {
            break;  // We've rotated (n-k) elements, so break
        }
    }
}

int main() {
    queue<int> q;

    // Push elements into the queue
    q.push(3);
    q.push(5);
    q.push(9);
    q.push(12);
    q.push(15);

    int k = 3;

    // Reverse the first 'k' elements of the queue
    reverseKElements(q, k);

    // Print the modified queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}