class Solution {
public:

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // slow, fast
        ListNode* slow = head;
        ListNode* fast = head;
        for (int i=0;i<n;i++) fast=fast->next; // iterate through fast (n) times
        if(!fast)return head->next; // if nullptr, just return next head pointer

        while (fast && fast->next){ // two pointers algo
            fast=fast->next; // iterating through
            slow=slow->next; // iterating through
        }
        slow->next=slow->next->next; // the "next" pointer for "slow" is now the next next pointer 
        return head; // return modified
    }
};
