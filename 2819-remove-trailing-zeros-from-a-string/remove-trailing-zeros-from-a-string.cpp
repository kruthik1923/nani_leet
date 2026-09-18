class Solution {
public:
    string removeTrailingZeros(string num) {
        string p="";
        int flag=0;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]=='0' && flag==0){
                continue;
            }
            if(num[i]>'0'){flag=1;}
            p+=num[i];
        }
        reverse(p.begin(),p.end());
        return p;
    }
};