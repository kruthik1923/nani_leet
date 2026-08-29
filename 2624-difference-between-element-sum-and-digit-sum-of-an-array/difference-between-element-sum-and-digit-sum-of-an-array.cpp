class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int ans=0,elem=0,dig=0;
        string s="";
    
        for(int i=0;i<nums.size();i++){
            elem+=nums[i];
            s+=to_string(nums[i]);
        }
        for(int i=0;i<s.length();i++){
            dig+= s[i]-'0';
        }
        return abs(elem-dig);
    }
};