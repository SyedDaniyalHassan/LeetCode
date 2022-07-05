class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        int m = nums1.size();
        int n = nums2.size();
        //first check if any of the arrays are empty
        if (n == 0){
            int mid = m/2;
            if (m&1)
                return nums1[m/2];
            else
                return (double)(nums1[mid]+nums1[mid-1])/2;
        }
        if (m == 0){
            int mid = n/2;
            if (n%2 != 0)
                return nums2[mid];
            else
                return (double)(nums2[mid]+nums2[mid-1])/2;
        }
        if (nums1.size()>nums2.size())
            return findMedianSortedArrays(nums2,nums1);
        int l = 0;
        int r = m;
        while(r>=l){
            int mid1 = (l+r)/2;
            int mid2 = (n+m)/2 - mid1;
            
            int max1 = (mid1 == 0)?INT_MIN:nums1[mid1-1];//max element of left half of first array
            int min1 = (mid1 == m)?INT_MAX:nums1[mid1];//min element of right half of first array
            int max2 = (mid2 == 0)?INT_MIN:nums2[mid2-1];//max element of left half of second array
            int min2 = (mid2 == n)?INT_MAX:nums2[mid2];//min element of right half of second array
            if (max1<=min2 && max2<=min1)
                return ((m+n)&1)?min(min1,min2):(double)(min(min1,min2)+max(max1,max2))/2;
            else if(max2>min1)
                l = mid1+1;
            else 
                r = mid1-1;
        }
        return 0;
    }
};