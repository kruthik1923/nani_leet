/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int p=0;
        ListNode*temp=head;
        ListNode*dum=head;
        while(dum!=NULL){
            dum=dum->next;
            p++;
        }
        if(p==1){
            return NULL;
        }
        if(p==n){
            return head->next;
        }
        int q=0;
        while(temp!=NULL){
            if(q!=p-n){
                q++;
            }
            if(q==p-n){
                ListNode* hum=new ListNode();
                hum=temp->next;
                temp->next=hum->next;
                delete hum;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};