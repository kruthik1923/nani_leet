class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> l,r,v;
        int sum=0;
       
    for(int i = 0; i < nums.size(); i++) {
        sum = 0;
        for(int j = i + 1; j < nums.size(); j++) {
            sum += nums[j];
        }
        r.push_back(sum);
    }

    for(int i = nums.size() - 1; i >= 0; i--) {
        sum = 0;
        for(int j = i - 1; j >= 0; j--) {
            sum += nums[j];
        }
        l.push_back(sum);
    }
        reverse(l.begin(),l.end());

        for(int i=0;i<nums.size();i++){
            v.push_back(abs(l[i]-r[i]));
        }
        return v;
    }
};