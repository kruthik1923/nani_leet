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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int c=0;
        vector<int> p;
        ListNode*temp=head;
        ListNode*dum=head;
        while(temp!=NULL){
            c+=1;
            if(c>=left && c<=right){
                p.push_back(temp->val);
            }
            if(c<left){
                dum=dum->next;
            }
            if(c>right){
                break;
            }
            temp=temp->next;
        }
        int i=p.size()-1;
        int q=right-left+1;

        while(q>0){
            dum->val=p[i];
            i--;
            dum=dum->next;
            q--;
        }
        return head;
    }
};