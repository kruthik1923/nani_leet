class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int j, flag;

        for(int i = 0; i < words.size(); i++) {
            flag = 1;

            for(j = 0; j < words[i].length() / 2; j++) {
                if(words[i][j] != words[i][words[i].length() - 1 - j]) {
                    flag = 0;
                    break;
                }
            }

            if(flag)
                return words[i];
        }

        return "";
    }
};