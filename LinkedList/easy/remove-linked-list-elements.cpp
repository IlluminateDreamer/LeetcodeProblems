class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val == val) head = head->next;
        if(!head)return head;
        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr != nullptr) {
            if (curr->val == val) {
                prev->next = curr->next;
            } else {
                prev = curr;
            }
            curr = curr->next;
        }
        return head;
    }
};
