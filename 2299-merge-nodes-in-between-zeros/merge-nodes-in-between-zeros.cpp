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
    ListNode* mergeNodes(ListNode* head) {

        int count=0,sum=0;
        
        ListNode*temp=head;
        ListNode* tempo = new ListNode();
        ListNode* curr  = tempo;

        while(temp!=NULL){
            if(temp->val==0){
                count++;
            }
            if(count==2 && temp->val==0){
                curr->next=new ListNode(sum);
                curr=curr->next;
                count=1;
                sum=0;
            }
            else{
                sum+=temp->val;
            }
            temp=temp->next;
        }
        return tempo->next;
    }
};