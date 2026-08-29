class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> v;
        vector<int> freq(10,0);
        int nod=0;

        while(n!=0){
            v.push_back(n%10);
            n/=10;
            nod++;
        }

        for(int i=0;i<nod;i++){
            freq[v[i]]++;
            for(int j=i+1;j<nod;j++){
               if(v[i]==v[j]) {
                freq[v[i]]++;
                v[j]=0;
               }
            }
        }
        int score=0;
        for(int i=0;i<freq.size();i++){
            score+=i*freq[i];
        }
        return score;
    }
};