class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        vector<int> v;
        sort(arr.begin(),arr.end());
        int c=1,ans=0;
        for(int i=0;i+1<n;i++){
            if(arr[i]==arr[i+1]){
                c++;
            }
            else{
                v.push_back(c);
                c=1;
            }
        }
        v.push_back(c);
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--){
            ans+=v[i];
            if(ans>=n/2){
                return v.size()-i;
            }
        }
        return 0;
    }
};