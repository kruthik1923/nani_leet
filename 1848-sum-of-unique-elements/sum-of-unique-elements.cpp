class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> v(101,0);
        int c=0;
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                c+=i;
            }
        }
        return c;
    }
};