class Solution {
public:
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        // Create a new dummy node to build the merged list
        ListNode* ans = new ListNode(-1);
        ListNode* ptr = ans; // Pointer to traverse the merged list
        
        // If either of the input lists is empty, return the other list
        if (left == NULL) {
            return right;
        }
        if (right == NULL) {
            return left;
        }

        // Merge the two sorted lists
        while (left != NULL && right != NULL) {
            if (left->val <= right->val) {
                ptr->next = left;
                ptr = left;
                left = left->next;
            } else {
                ptr->next = right;
                ptr = right;
                right = right->next;
            }
        }
        
        // Attach any remaining nodes from the non-empty list (alternative method)
        // while (left) {
        //     ptr->next = left;
        //     ptr = left;
        //     left = left->next;
        // }
        // while (right) {
        //     ptr->next = right;
        //     ptr = right;
        //     right = right->next;
        // }
        
        // Attach any remaining nodes from the non-empty list (another alternative method)
        if (left != NULL) {
            ptr->next = left;
        }
        if (right != NULL) {
            ptr->next = right;
        }

        return ans->next; // Return the merged list (excluding the dummy node)
    }
};
