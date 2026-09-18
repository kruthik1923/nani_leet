class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
     vector<int> freq(101,0);
     int ans=0;
     for(int x : nums){
        freq[x]++;
     }  
     for(int i=0;i<freq.size();i++){
        if(freq[i]%k==0){
            ans+=(i*freq[i]);
        }
     } 
     return ans;
    }
};