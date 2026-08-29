class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        vector<double> avg;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
          avg.push_back((nums[i]+nums[n-1-i])/2.0);  
        }
        return *min_element(avg.begin(),avg.end());
    }
};