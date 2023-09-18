#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// Function to interleave the elements of a queue
void interleave(queue<int>& oq) {
    int n = oq.size();  // Get the size of the original queue
    if (oq.empty() || n == 1) {
        return;  // Nothing to interleave or only one element
    }
    int count = 0;
    int k = n / 2;  // Calculate the middle index
    queue<int> nq;  // Create a new queue to store the first half of elements

    // Step 1: Push the first half elements of oq to nq
    while (!oq.empty()) {
        int element = oq.front();  // Get the front element of oq
        oq.pop();  // Remove the front element from oq
        nq.push(element);  // Push the element to nq
        count++;  // Increment the count of elements moved
        if (count == k) {
            break;  // We've pushed the first half of elements, so break
        }
    }

    // Step 2: Interleave elements between nq and oq
    while (!nq.empty() && !oq.empty()) {
        int first = nq.front();  // Get the front element of nq
        nq.pop();  // Remove the front element from nq
        oq.push(first);  // Push the first element to the end of oq

        int second = oq.front();  // Get the front element of oq
        oq.pop();  // Remove the front element from oq
        oq.push(second);  // Push the second element to the end of oq
    }

    // Handling the odd case where the original queue has one more element than nq
    if (n & 1) {
        int element = oq.front();  // Get the front element of oq
        oq.pop();  // Remove the front element from oq
        oq.push(element);  // Push the element to the end of oq
    }
}

int main() {
    queue<int> q;

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    // Call the interleave function to interleave the elements of the queue
    interleave(q);

    // Print the modified queue
    while (!q.empty()) {
        cout << q.front() << " ";  // Print the front element of the queue
        q.pop();                   // Remove the front element from the queue
    }

    return 0;
}
