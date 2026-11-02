class Solution {
public:
    int numTeams(vector<int>& r) {
        int n=r.size();
        int ans=0;
        for(int i=1;i<n-1;i++){
          int c1=0,c2=0;
          for(int j=0;j<i;j++) if(r[j]<r[i]) c1++;
          for(int j=i+1;j<n;j++) if(r[j]>r[i]) c2++;
          ans+=(c1*c2);
          c1=0,c2=0;
          for(int j=0;j<i;j++) if(r[j]>r[i]) c1++;
          for(int j=i+1;j<n;j++) if(r[j]<r[i]) c2++;
          ans+=(c1*c2);
        }
        return ans;
    }
};