class Solution {
public:
    void linkdelete(struct Node *head, int M, int N) {
        if (head == NULL) {
            return; // If the linked list is empty, nothing to delete
        }

        Node* it = head; // Pointer to traverse the linked list

        // Traverse to the (M-1)th node
        for (int i = 0; i < M - 1; ++i) {
            if (it == NULL) {
                return; // If we reach the end before reaching (M-1)th node, return
            }
            it = it->next;
        }

        if (it == NULL) {
            return; // If we haven't reached (M-1)th node, return
        }

        Node* MthNode = it; // (M-1)th node
        it = MthNode->next; // Move to Mth node

        // Delete N nodes starting from Mth node
        for (int i = 0; i < N; i++) {
            if (it == NULL) {
                break; // If we reach the end while deleting, break
            }
            Node* temp = it->next; // Store the next node
            delete it; // Delete the current node
            it = temp; // Move to the next node
        }

        MthNode->next = it; // Update the next pointer of (M-1)th node to skip the deleted nodes

        linkdelete(it, M, N); // Recursively delete nodes from the next Mth node
    }
};
