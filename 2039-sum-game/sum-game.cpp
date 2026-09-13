class Solution {
public:
    bool sumGame(string num) {
        int ls=0,rs=0,n=num.size(),lq=0,rq=0;
        for(int i=0;i<num.size();i++){
            if(i<n/2){
                if(num[i]!='?'){
                    ls+=num[i]-'0';
                }
                else{
                    lq++;
                }
            }
            else if(i>=n/2){
                if(num[i]!='?'){
                    rs+=num[i]-'0';
                }
                else{
                    rq++;
                }
            }
        }
      return (lq + rq) % 2 == 1 ||
       2 * (ls - rs) != 9 * (rq - lq);
    }
};