class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> v;
        vector<int> freq(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
         for(int i=0;i<freq.size();i++){
            if(freq[nums[i]]==2){
                v.push_back(nums[i]);
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        return v;
    }
};