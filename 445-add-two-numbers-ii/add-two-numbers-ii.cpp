class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* temp=head;

        while(temp!=NULL) {
            ListNode* demo=temp->next;
            temp->next=prev;
            prev=temp;
            temp=demo;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);

        ListNode* head=new ListNode(0);
        ListNode* temp=head;

        int carry=0;

        while(l1!=NULL || l2!=NULL || carry!=0) {
            int sum=carry;

            if(l1!=NULL) {
                sum+=l1->val;
                l1=l1->next;
            }

            if(l2!=NULL) {
                sum+=l2->val;
                l2=l2->next;
            }

            carry=sum/10;

            temp->next=new ListNode(sum%10);
            temp=temp->next;
        }

        return reverse(head->next);
    }
};