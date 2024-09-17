class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr)return 0;
        auto slow = head;
        auto fast = head;
        while(fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return true;
        }
        return false;
    }
};
