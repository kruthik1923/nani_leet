class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
        int n=(a+b)/2;
        int count=0;
        int i=0;
        int j=0;
        int prev=0,curr=0;

        while(count<=n){
            prev=curr;

            if(i<a && (j>=b || nums1[i]<=nums2[j])){
                curr=nums1[i];
                i++;
            }
            else{
                curr=nums2[j];
                j++;
            }

            count++;
        }

        if((a+b)%2!=0){
            return curr;
        }

        return (prev+curr)/2.0;
    }
};