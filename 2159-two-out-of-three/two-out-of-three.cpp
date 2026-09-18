class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> freq(101,0),v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        sort(nums3.begin(),nums3.end());
        nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
        nums3.erase(unique(nums3.begin(),nums3.end()),nums3.end());
        for(int i : nums1){
            freq[i]++;
        }
        for(int i : nums2){
            freq[i]++;
        }
        for(int i : nums3){
            freq[i]++;
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]>=2){
                v.push_back(i);
            }
        }
        return v;
    }
};