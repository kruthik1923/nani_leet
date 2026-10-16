class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        vector<int> v=nums;
        sort(v.begin(),v.end());

        vector<int> val,f;
        for(int i=0;i<v.size();){
            int j=i;
            while(j<v.size() && v[j]==v[i]) j++;
            val.push_back(v[i]);
            f.push_back(j-i);
            i=j;
        }

        vector<int> freq=f;
        sort(freq.begin(),freq.end());

        for(int x:nums){
            int i=lower_bound(val.begin(),val.end(),x)-val.begin();
            int c=upper_bound(freq.begin(),freq.end(),f[i])-lower_bound(freq.begin(),freq.end(),f[i]);
            if(c==1) return x;
        }

        return -1;
    }
};