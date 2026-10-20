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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> o,e;
        ListNode*temp=head;
        int k=0;
        while(temp){
            if(k%2==0){
                o.push_back(temp->val);
                k++;
            }
            else{
                e.push_back(temp->val);
                k++;
            }
            temp=temp->next;
        }
        ListNode*dum=head;
        int i=0;
        int j=0;
        while(dum){
            if(i<o.size()){
                dum->val=o[i];
                i++;
            }
            else{
                if(j<e.size()){
                    dum->val=e[j];
                    j++;
                }
            }
            dum=dum->next;
        }
        return head;
    }
};