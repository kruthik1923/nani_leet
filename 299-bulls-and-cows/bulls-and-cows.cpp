class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> s,g;
        int n=secret.length();
        for(int i=0;i<n;i++){
            s.push_back(secret[i]-'0');
            g.push_back(guess[i]-'0');
        }
        int nob=0,noc=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==g[i]){
                nob++;
                s.erase(s.begin() + i);
                g.erase(g.begin() + i);
                i--;
            }
        }
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < g.size(); j++) {
                if (s[i] == g[j]) {
                    noc++;
                    g.erase(g.begin() + j);
                    break;
                }
            }
        }
        string str="";
        str+=to_string(nob);
        str+='A';
        str+=to_string(noc);
        str+='B';
        return str;
    }
};