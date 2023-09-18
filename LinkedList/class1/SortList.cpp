class Solution {
public:
   // find middle function
    ListNode* findMid(ListNode* &head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    //merging function
            // Merge the two sorted lists
    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode* ans = new ListNode(-1);
        ListNode* ptr = ans;

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

        if (left != NULL) {
            ptr->next = left;
        }
        if (right != NULL) {
            ptr->next = right;
        }

        return ans->next;
    }

    ListNode* sortList(ListNode* head) {
        // jb head and head ke next null pr ho toh return head kr denge
        if (head == NULL || head->next == NULL) {
            return head;
        }
          //find mid and divide two LL
        ListNode* mid = findMid(head);
         //left node head pr hai
        ListNode* left = head;
          //right node mid ke next pr hai
          ListNode* right = mid->next;
          // divided two part using mid->next
        mid->next = NULL;
      // sort by RE
        left = sortList(left);
        right = sortList(right);
        // mergeing of broken linkedLiist
        return merge(left, right);
    }
};
