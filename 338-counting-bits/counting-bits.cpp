class Solution {
public:
 
    vector<int> countBits(int n) {
        vector<int> v;
        int p=0,c=0;
        v.push_back(0);
        for(int i=1;i<=n;i++){
            p=0;
            c=i;
            while(c!=0){
                if(c%2==1){p++;}
                c/=2;
            }
            v.push_back(p);
        }
        return v;
    }
};