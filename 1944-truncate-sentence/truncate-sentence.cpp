class Solution {
public:
    string truncateSentence(string s, int k) {
        string q="";
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){count++;}
            if(count==k){
                return q;
            }
            q+=s[i];
        }
        return q;
    }
};