class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode* dummy = new ListNode(0);  // Create a dummy node to handle edge cases
        dummy->next = head;
        
        ListNode* slow = dummy;  // Initialize a slow pointer
        ListNode* fast = dummy;  // Initialize a fast pointer
        
        // Move the fast pointer n+1 steps ahead
        for (int i = 0; i <= n; ++i) {
            fast = fast->next;
        }
        
        // Move both slow and fast pointers until fast reaches the end
        while (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        
        // Remove the nth node from the end
        ListNode* toRemove = slow->next;
        slow->next = slow->next->next;
        delete toRemove;  // Deallocate memory for the removed node
        
        return dummy->next;  // Return the modified linked list
    }
};