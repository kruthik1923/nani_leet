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
    int gcd(int a,int b){
        if(a==1||b==1){
            return 1;
        }
        if(a==b){
            return a;
        }
        if(a>b){
            return gcd(a-b,b);
            }
        else{
            return gcd(a,b-a);
        }
        return 0;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        int p=0,q=0,r=0;
        ListNode*ans=head;
        while(head!=NULL && head->next!=NULL){
            p=head->val;
            q=head->next->val;
            ListNode* r=new ListNode(gcd(p,q));
            r->next=head->next;
            head->next=r;
            head=r->next;
        }
        return ans;
    }
};