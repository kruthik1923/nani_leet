class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> v;
        ListNode* ans = head;

        while (head != nullptr) {
            v.push_back(head->val);
            head = head->next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = ans;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        int maxi = 0;
        int n = v.size();

        for (int i = 0; i < n / 2; i++) {
            maxi = max(maxi, v[i] + prev->val);
            prev = prev->next;
        }

        return maxi;
    }
};