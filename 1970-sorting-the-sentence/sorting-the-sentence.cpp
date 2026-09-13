class Solution {
public:
    string sortSentence(string s) {
        vector<string> v(10);
        string p= "";
        int index=0;
        for(int i = 0; i <= s.size(); i++) {
            if(i == s.size() || s[i] == ' ') {
                index=p.back() - '0';
                p.pop_back();
                v[index] = p;
                p="";
            }
            else {
                p+= s[i];
            }
        }
        string ans = "";

        for(int i = 1; i < 10; i++) {
            if(v[i] != "") {
                if(ans != ""){
                    ans += " ";
                }
                ans += v[i];
            }
        }
        return ans;
    }
};