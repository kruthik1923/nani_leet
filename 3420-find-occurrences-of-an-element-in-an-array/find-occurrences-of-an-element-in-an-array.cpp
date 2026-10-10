class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> v,r;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                v.push_back(i);
            }
        }
        int n=v.size();
        for(int i=0;i<queries.size();i++){
            if(queries[i]<=n){
                r.push_back(v[queries[i]-1]);
            }
            else{
                r.push_back(-1);
            }
        }
        return r;
    }
};