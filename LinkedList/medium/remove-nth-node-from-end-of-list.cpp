class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Advance fast pointer by n+1 steps
        for (int i = 0; i <= n; ++i) {
            fast = fast->next;
        }

        // Move fast to the end, maintaining the gap
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Skip the desired node
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete;

        ListNode* newHead = dummy->next;
        delete dummy;  // Avoid memory leak
        return newHead;
    }
};
