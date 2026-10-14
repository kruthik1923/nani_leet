class Solution {
public:
    
    int numberOfBeams(vector<string>& bank) {
        vector<int> p;
        for(int i=0;i<bank.size();i++){
            int nol=0;
            for(int j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1'){
                    nol++;
                }
            }
            p.push_back(nol);
        }
        int ans=0;
        for(int i=0;i<bank.size()-1;i++){
            for(int j=i+1;j<bank.size();j++){
                int flag=1;
                for(int k=i+1;k<j;k++){
                    if(p[k]!=0){
                        flag=0;
                    }
                }
                if(flag==0){
                    break;
                }
                else{
                    ans+=p[i]*p[j];
                }
            }
        }
        return ans;
    }
};