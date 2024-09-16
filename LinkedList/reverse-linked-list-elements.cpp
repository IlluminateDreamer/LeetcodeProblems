class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next_node = nullptr;
        while(current!=nullptr){
            next_node = current->next;
            current->next = prev;
            prev = current;
            current = next_node;
        }
        head = prev;
        return head;
    }
};
