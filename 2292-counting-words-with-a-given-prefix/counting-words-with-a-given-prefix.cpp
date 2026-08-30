class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0, k = 0;

        for(int i = 0; i < words.size(); i++) {
            if(words[i].length() < pref.length())
                continue;

            while(k < pref.length()) {
                if(pref[k] != words[i][k]) {
                    break;
                }
                k++;
            }

            if(k == pref.length())
                count++;

            k = 0;
        }

        return count;
    }
};