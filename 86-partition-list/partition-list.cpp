class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return head;

        vector<int> v;
        ListNode* temp=head;

        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }

        vector<int> p;
        int count=0;

        for(int i=0;i<v.size();i++){
            if(v[i]<x){
                p.push_back(v[i]);
            }
            else{
                count++;
            }
        }

        int pos=p.size();

        for(int i=0;i<v.size();i++){
            if(v[i]>=x){
                p.push_back(v[i]);
            }
        }

        temp=head;
        int i=0;

        while(temp!=NULL){
            temp->val=p[i++];
            temp=temp->next;
        }

        return head;
    }
};