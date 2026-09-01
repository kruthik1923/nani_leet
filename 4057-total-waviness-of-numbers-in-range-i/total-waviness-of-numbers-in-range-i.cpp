class Solution {
public:
    int check(int n){
        int num=n,nod=0;
        vector<int> v;
        int now=0;
        while(num!=0){
            nod++;
            v.push_back(num%10);
            num/=10;
        }
        for(int i=0;i+1<v.size();i++){
            if(i!=0 && i!=v.size()-1){
                if(v[i]>v[i-1] && v[i]>v[i+1]){
                    now++;
                }
                 if(v[i]<v[i-1] && v[i]<v[i+1]){
                    now++;
                }
            }
        }
        return now;
    }
    int totalWaviness(int num1, int num2) {
        int p=0,v=0,total=0;
        for(int i=num1;i<=num2;i++){
           total+=check(i);
        }
        return total;
    }
};