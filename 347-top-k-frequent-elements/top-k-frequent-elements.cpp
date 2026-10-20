class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> p,q,r;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            q.push_back(nums[i]);
            int c=count(nums.begin(),nums.end(),nums[i]);
            p.push_back(c);
        }
        for(int i=0;i<p.size();i++){
            for(int j=i+1;j<p.size();j++){
                if(p[i]<p[j]){
                    swap(p[i],p[j]);
                    swap(q[i],q[j]);
                }
            }
        }
        for(int i=0;i<k;i++){
            r.push_back(q[i]);
        }
        return r;
    }
};