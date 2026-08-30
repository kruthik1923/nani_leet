class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int c1=0,c2=0;
        vector<int> v;
        for(int i : nums1){
            for(int j : nums2){
                if(i==j){c1++;
                break;}
            }
        }
        for(int i : nums2){
            for(int j : nums1){
                if(i==j){c2++;
                break;}
            }
        }
        v.push_back(c1);
        v.push_back(c2);
    return v;
    }
};