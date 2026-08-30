class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v;
        int ans=0;
        for(int i=0;i<gain.size();i++){
            if(i==0){
                v.push_back(0);
                v.push_back(gain[i]);
                ans=gain[i];
            }
            else{
                ans=ans+gain[i];
                v.push_back(ans);
            }
        }
        return *max_element(v.begin(),v.end());
    }
};