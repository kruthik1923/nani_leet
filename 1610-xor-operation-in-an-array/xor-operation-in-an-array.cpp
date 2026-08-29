class Solution {
public:
    int xorOperation(int n, int start) {
       vector<int> v;
       int res=0;
       for(int i=0;i<n;i++){
        v.push_back(start+2*i);
       } 
       for(int i=0;i<n;i++){
        if(i==0){res = v[i];}
        else{
            res^=v[i];
        }
       }
       return res;
    }
};