class Solution {
public:
string addBinary(string a, string b) {
vector<int> p, q, v;
    for(int i = a.size()-1; i >= 0; i--)
        p.push_back(a[i]-'0');

    for(int i = b.size()-1; i >= 0; i--)
        q.push_back(b[i]-'0');

    int carry = 0;

    for(int i = 0; i < max(p.size(), q.size()); i++) {
        int sum = carry;

        if(i < p.size())
            sum += p[i];

        if(i < q.size())
            sum += q[i];

        v.push_back(sum % 2);
        carry = sum / 2;
    }

    if(carry)
        v.push_back(carry);

    string ans = "";

    for(int i = v.size()-1; i >= 0; i--)
        ans += char(v[i] + '0');

    return ans;
}

};
