class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s="";
        int sum=0;
        int p=0;

        vector<char> mp(26);
        for (int i = 0; i < 26; i++) {
            mp[i] = 'z' - i;
        }

        for(int i=0;i<words.size();i++){
            sum=0;
            for(int j=0;j<words[i].length();j++){
                sum+=weights[words[i][j]-'a'];
                p++;
            }
            s+=mp[sum%26];
        }
        return s;
    }
};