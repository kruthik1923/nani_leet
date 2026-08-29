class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> v,p;
        for(int i=0;i<friends.size();i++){
            for(int j=0;j<order.size();j++){
                if(friends[i]==order[j]){
                    v.push_back(j);
                }
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            p.push_back(order[v[i]]);
        }
        return p;
    }
};