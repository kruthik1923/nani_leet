class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;

        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* prev=NULL;
        ListNode* temp=slow->next;
        slow->next=NULL;

        while(temp!=NULL){
            ListNode* demo=temp->next;
            temp->next=prev;
            prev=temp;
            temp=demo;
        }

        ListNode* first=head;
        ListNode* second=prev;

        while(second!=NULL){
            ListNode* demo=first->next;
            first->next=second;
            first=demo;

            demo=second->next;
            second->next=first;
            second=demo;
        }
    }
};