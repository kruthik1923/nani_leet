class Solution {
public:
    int minimumSum(int num) {
    
        vector<int> v;
        while(num!=0){
            v.push_back(num%10);
            num/=10;
        }
        sort(v.begin(),v.end());

        int s1=0,s2=0;
        s1=v[0]*10+v[3];
        s2=v[1]*10+v[2];
     
        int s4=0,s5=0;
        s4=v[0]*10+v[2];
        s5=v[1]*10+v[3];

        return max(s1+s2,s4+s5);
      
    }
};