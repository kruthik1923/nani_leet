class Solution {
public:
int countNumbersWithUniqueDigits(int n) {
if (n == 0) return 1;
    int ans = 10;
    int res = 9;
    int p = 9;
    for (int i = 2; i <= n; i++) {
        res *= p;
        ans += res;
        p--;
    }

    return ans;
}

};
