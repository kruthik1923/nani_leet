class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        int c=0;
        for(int i=0;i+1<nums.size();i=i+2){
            c=0;
            while(c<nums[i]){
                v.push_back(nums[i+1]);
                c++;
            }
        }
        return v;
    }
};