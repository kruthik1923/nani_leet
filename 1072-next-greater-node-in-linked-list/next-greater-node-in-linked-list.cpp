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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> p,v;
        
        ListNode*dum=head;
        while(dum!=NULL){
            p.push_back(dum->val);
            dum=dum->next;
        }
        for(int i=0;i<p.size();i++){
            int flag=0;
            int num=p[i];
            for(int j=i+1;j<p.size();j++){
                if(p[i]<p[j]){
                    v.push_back(p[j]);
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                v.push_back(0);
            }
        }
        return v;
    }
};