class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> v,r;
        int count=0;
        for(int i=0;i<boxes.length();i++){
             v.push_back(boxes[i]-'0');
        }
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v.size();j++){
                if(i!=j && v[j]==1){
                    count+=abs(i-j);
                }
            }
            r.push_back(count);
            count=0;
        }
        return r;
    }
};