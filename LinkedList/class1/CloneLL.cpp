class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) {
            return 0;  // Return NULL if the input list is empty
        }

        // Step 1: Create new nodes and interleave them between the original nodes
        Node* it = head;
        while (it != 0) {
            Node* cloneNode = new Node(it->val); // Create a new node with the same value
            cloneNode->next = it->next; // Connect the cloned node to the original next

            it->next = cloneNode; // Connect the original node to the cloned node
            it = it->next->next; // Move to the next original node
        }

        // Step 2: Copy random pointers to the cloned nodes
        it = head;
        while (it) {
            Node* cloneNode = it->next; // Get the cloned node
            // Copy the random pointer of the original node to the cloned node
            cloneNode->random = it->random ? it->random->next : NULL;
            it = it->next->next; // Move to the next original node
        }

        // Step 3: Separate original and cloned nodes, fixing the 'next' pointers
        it = head;
        Node* clonehead = it->next; // Save the head of the cloned list

        while (it) {
            Node* cloneNode = it->next; // Get the cloned node
            it->next = it->next->next; // Update the original next pointer
            
            // Update the cloned node's next pointer (if there is one)
            if (cloneNode->next) {
                cloneNode->next = cloneNode->next->next;
            }
            it = it->next; // Move to the next original node
        }

        return clonehead; // Return the head of the cloned list
    }
};