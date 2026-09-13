class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> v;

        sort(nums.begin(), nums.end());

        int l = 0, h = nums.size() - 1,m=0,x=0;

        while(l <= h) {
            m = (l + h) / 2;

            if(nums[m] == target) {
                v.push_back(m);

                x = m - 1;
                while(x >= 0 && nums[x] == target) {
                    v.push_back(x);
                    x--;
                }

                x = m + 1;
                while(x < nums.size() && nums[x] == target) {
                    v.push_back(x);
                    x++;
                }

                break;
            }
            else if(nums[m] > target) {
                h = m - 1;
            }
            else {
                l = m + 1;
            }
        }

        sort(v.begin(), v.end());
        return v;
    }
};