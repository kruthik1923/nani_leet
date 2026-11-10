class Solution {
public:
    vector<int> addNegabinary(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;

        int m = arr1.size() - 1;
        int n = arr2.size() - 1;
        int carry = 0;

        while (m >= 0 || n >= 0 || carry != 0) {
            int sum = carry;

            if (m >= 0)
                sum += arr1[m--];

            if (n >= 0)
                sum += arr2[n--];

            int bit = (sum % 2 + 2) % 2;
            v.push_back(bit);

            carry = -(sum - bit) / 2;
        }

        while (v.size() > 1 && v.back() == 0)
            v.pop_back();

        reverse(v.begin(), v.end());

        return v;
    }
};