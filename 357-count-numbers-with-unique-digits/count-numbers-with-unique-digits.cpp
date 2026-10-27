class Solution {
public:
int countNumbersWithUniqueDigits(int n) {
if (n == 0) return 1;
    int ans = 10;
    int res = 9;
    
    for (int i = 2; i <= n; i++) {
        res *=(11-i);
        ans += res;
    }
    return ans;
}

};
