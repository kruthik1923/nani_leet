class Solution {
public:
    int numberOfMatches(int n) {
        int nom=0;
        while(n!=1){
            if(n%2==0){
                n=n/2;
                nom+=n;
            }
            else{
                nom+=n/2;
                n=(n/2)+1;
            }
        }
        return nom;
    }
};