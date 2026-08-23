class Solution {
public:
    int balancedStringSplit(string s) {
        int count1=0;
        int count2=0;
        int final=0;
        for(char x : s){
            if(x=='R'){count1++;}
            else{count2++;}
            if(count1==count2){
                final++;
                count1=0;
                count2=0;
            }
        }
        return final;
    }
};