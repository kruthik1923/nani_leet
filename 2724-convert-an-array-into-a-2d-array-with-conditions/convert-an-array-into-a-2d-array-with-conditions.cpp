class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq(201,0);

        for(int x : nums)
            freq[x]++;

        int p = *max_element(freq.begin(), freq.end());

        vector<vector<int>> v(p);

        int j = 0;
        while(j < p){
            for(int i = 0; i < 201; i++){
                if(freq[i] > 0){
                    v[j].push_back(i);
                    freq[i]--;
                }
            }
            j++;
        }
        return v;
    }
};