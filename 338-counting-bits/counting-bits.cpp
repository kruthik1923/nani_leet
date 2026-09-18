class Solution {
public:
    int bin(int n){
        int p=0;
        while(n!=0){
            if(n%2==1){p++;}
            n/=2;
        }
        return p;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            v.push_back(bin(i));
        }
        return v;
    }
};