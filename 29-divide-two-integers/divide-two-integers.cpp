class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long x = abs((long long)dividend);
        long long y = abs((long long)divisor);
        long long ans = 0;

        while (x >= y) {
            long long temp = y;
            long long count = 1;

            while (x >= temp + temp) {
                temp += temp;
                count += count;
            }

            x -= temp;
            ans += count;
        }

        if ((dividend < 0) != (divisor < 0))
            return -ans;

        return ans;
    }
};