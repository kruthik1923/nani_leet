class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;

        vector<int> p, q;
        ListNode* temp = head;

        while(temp != NULL) {
            p.push_back(temp->val);
            temp = temp->next;
        }

        int n = p.size();
        k = k % n;

        if(k == 0)
            return head;

        for(int i = n - k; i < n; i++)
            q.push_back(p[i]);

        for(int i = 0; i < n - k; i++)
            q.push_back(p[i]);

        temp = head;
        int i = 0;

        while(temp != NULL) {
            temp->val = q[i++];
            temp = temp->next;
        }

        return head;
    }
};