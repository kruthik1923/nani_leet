class Solution {
public:
    int maxIceCream(vector<int>& costs,int coins){
        int maxy=*max_element(costs.begin(),costs.end());
        vector<int> freq(maxy+1,0);
        for(int i=0;i<costs.size();i++)
            freq[costs[i]]++;
        costs.clear();
        for(int i=0;i<=maxy;i++){
            while(freq[i]>0){
                costs.push_back(i);
                freq[i]--;
            }
        }
        int a=0;
        for(int i=0;i<costs.size();i++){
            coins-=costs[i];
            if(coins>=0)
                a++;
            else
                break;
        }
        return a;
    }
};