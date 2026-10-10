class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int p = num1.find('+');
        int a = stoi(num1.substr(0, p));
        int b = stoi(num1.substr(p + 1, num1.size() - p - 2));

        p = num2.find('+');
        int c = stoi(num2.substr(0, p));
        int d = stoi(num2.substr(p + 1, num2.size() - p - 2));

        int real = a * c - b * d;
        int imag = a * d + b * c;

        return to_string(real) + "+" + to_string(imag) + "i";
    }
};