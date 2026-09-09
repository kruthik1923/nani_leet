class Solution {
public:
    string clearDigits(string s) {
        string p="";
        for(int i=0;i<s.length();i++){
            if(s[i]-'0'<=9){
                p.pop_back();
            }
            else{
                p+=s[i];
            }
        }
        return p;
    }
};