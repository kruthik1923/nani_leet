class Solution {
public:
    long long countCommas(long long n) {
        long long count = 0;

        if(n >= 1000)
            count += min(n, 999999LL) - 999;

        if(n >= 1000000)
            count += 2 * (min(n, 999999999LL) - 999999LL);

        if(n >= 1000000000)
            count += 3 * (min(n, 999999999999LL) - 999999999LL);

        if(n >= 1000000000000LL)
            count += 4 * (min(n, 999999999999999LL) - 999999999999LL);

        if(n >= 1000000000000000LL)
            count += 5 * (n - 999999999999999LL);

        return count;
    }
};