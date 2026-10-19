class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0, head);
        ListNode* temp = &dummy;

        while (temp->next && temp->next->next) {
            ListNode* a = temp->next;
            ListNode* b = a->next;

            a->next = b->next;
            b->next = a;
            temp->next = b;

            temp = a;
        }

        return dummy.next;
    }
};