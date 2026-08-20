class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int count = 0;
        int m = flowerbed.size();

        // First position
        if (m == 1) {
            if (flowerbed[0] == 0) count++;
            return count >= n;
        }

        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            count++;
            flowerbed[0] = 1;
        }

        // Middle positions
        for (int i = 1; i < m - 1; i++) {
            if (flowerbed[i] == 0 &&
                flowerbed[i - 1] == 0 &&
                flowerbed[i + 1] == 0) {

                count++;
                flowerbed[i] = 1;   // mark it
            }
        }

        // Last position
        if (flowerbed[m - 1] == 0 && flowerbed[m - 2] == 0) {
            count++;
        }

        return count >= n;
    }
};
