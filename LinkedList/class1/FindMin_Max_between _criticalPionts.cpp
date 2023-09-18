vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    vector<int> ans = {-1, -1}; // Initialize the result vector with default values

    // Pointers to keep track of the current, previous, and next nodes
    ListNode* prev = head;
    ListNode* curr = head->next;
    ListNode* nxt = head->next->next;

    // Check if the initial nodes are NULL, if yes, return the default result
    if (prev == NULL || curr == NULL || nxt == NULL) { 
        return ans;
    }
    
    int firstCp = -1; // Index of the first critical point
    int Lastcp = -1; // Index of the last critical point
    int minDis = INT_MAX; // Minimum distance between critical points
    int i = 1; // Index to track the current position in the list

    // Loop through the linked list
    while (nxt != NULL) {
        // Check if the current node is a critical point
        bool isCp = ((curr->val > prev->val && curr->val > nxt->val) ||
                    (curr->val < prev->val && curr->val < nxt->val)) ? true : false;
        
        if (isCp) {
            // If it's a critical point
            if (firstCp == -1) {
                firstCp = Lastcp = i; // Set the index of the first critical point
            } else {
                minDis = min(minDis, i - Lastcp); // Calculate the minimum distance between critical points
                Lastcp = i; // Update the index of the last critical point
            }
        }
        
        // Move the pointers forward
        i++;
        prev = prev->next;
        curr = curr->next;
        nxt = nxt->next;
    }

    // Check if only one critical point is found
    if (Lastcp == firstCp) {
        return ans; // Return the default result
    } else {
        ans[0] = minDis; // Update the result with the minimum distance
        ans[1] = Lastcp - firstCp; // Update the result with the distance between the first and last critical points
    }
    
    return ans; // Return the final result vector
}
