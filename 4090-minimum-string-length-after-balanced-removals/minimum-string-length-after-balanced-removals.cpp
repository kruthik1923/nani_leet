class Solution {
public:
    int minLengthAfterRemovals(string s) {
       int p=0,q=0;
       for(char ch : s){
        if(ch=='a'){p++;}
        else{q++;}
       }
       return abs(p-q);
    }
};