class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=0,count=1;
        sort(piles.begin(),piles.end(),greater<int>());
        for(int i=1;i<piles.size();i=i+2){
            if(count<=piles.size()/3){
                n+=piles[i];
                count++;
            }
        }
        return n;
    }
};