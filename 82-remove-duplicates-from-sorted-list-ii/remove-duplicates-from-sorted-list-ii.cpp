class Solution {
public:
ListNode* deleteDuplicates(ListNode* head) {
vector<int> v;
ListNode* temp = head;

    while (temp != NULL) {
        v.push_back(temp->val);
        temp = temp->next;
    }

    unordered_map<int, int> freq;

    for (int x : v) {
        freq[x]++;
    }

    ListNode* newHead = NULL;
    ListNode* tail = NULL;

    for (int x : v) {
        if (freq[x] == 1) {
            ListNode* node = new ListNode(x);

            if (newHead == NULL) {
                newHead = node;
                tail = node;
            }
            else {
                tail->next = node;
                tail = node;
            }
        }
    }

    return newHead;
    }
};
