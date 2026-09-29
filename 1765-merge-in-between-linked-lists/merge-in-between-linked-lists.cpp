class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* p=list1;
        for(int i=0;i<a-1;i++){
            p=p->next;
        }
        ListNode* q=p;
        for(int i=0;i<b-a+2;i++){
            q=q->next;
        }
        p->next=list2;
        while(list2->next!=NULL){
            list2=list2->next;
        }
        list2->next=q;
        return list1;
    }
};