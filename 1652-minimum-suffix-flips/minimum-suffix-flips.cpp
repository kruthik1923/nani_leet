class Solution {
public:
    int minFlips(string target) {
        int ans=0;
        char temp='0';
        for(char c : target){
            if(c!=temp){
                ans++;
                temp=c;
            }
        }
        return ans;
    }
};