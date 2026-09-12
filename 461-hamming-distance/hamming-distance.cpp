class Solution {
public:
    int hammingDistance(int x, int y) {
        int z=x^y,c=0;
        vector<int> v;
        while(z!=0){
            v.push_back(z%2);
            z/=2;
        }
        for(int a : v){
            if(a==1){c++;}
        }
        return c;
    }
};