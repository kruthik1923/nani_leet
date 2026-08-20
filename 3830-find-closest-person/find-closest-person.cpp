class Solution {
public:
    int findClosest(int x, int y, int z) {
       int a=abs(z-x);
       if(a<abs(y-z)) return 1;
       else if(a>abs(y-z))return 2;
       else return 0;
    }
};