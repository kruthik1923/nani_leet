class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans=0,cap=capacity;
        for(int i=0;i<plants.size();i++){
            if(cap>=plants[i]){
                ans++;
                cap-=plants[i];
            }
            else{
                cap=capacity;
                ans+=(i+1)*2-1;
                cap-=plants[i];
            }
        }
        return ans;
    }
};