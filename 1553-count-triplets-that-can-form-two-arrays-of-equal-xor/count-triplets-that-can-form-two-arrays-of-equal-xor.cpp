class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            int xorSum = 0;
            for (int k = i; k < n; k++) {
                xorSum ^= arr[k];
                if (xorSum == 0) {
                    count += (k - i);
                }
            }
        }

        return count;
    }
};