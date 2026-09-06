class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;
        int days = n % 7;

        int week_earned = weeks * 28 + 7 * weeks * (weeks - 1) / 2;
        int days_earned = days * (2 * (weeks + 1) + (days - 1)) / 2;

        return week_earned + days_earned;
    }
};