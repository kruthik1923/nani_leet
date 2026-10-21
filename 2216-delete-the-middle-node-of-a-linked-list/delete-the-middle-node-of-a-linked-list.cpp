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
    ListNode* deleteMiddle(ListNode* head) {
        int count=0,demo=-1;
        ListNode*temp=head;
        ListNode*dummy=head;
        while(dummy){
            count++;
            dummy=dummy->next;
        }
        int tobe=count/2;
        if(count==1){
            return NULL;
        }
        while(temp){
            demo++;
            if(tobe-1==demo){
                ListNode*d=temp->next;
                temp->next=temp->next->next;
                delete d;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};