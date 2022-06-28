class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> whole;
        int it1 = 0;
        int it2 = 0;
        int limi_1 = nums1.size();
        int limi_2 = nums2.size();
        cout<<"SZIE x" <<limi_1<<"  Size y "<<limi_2<<endl;
        while(it1!=limi_1 || it2!=limi_2)
        {
            if(it1!=limi_1 and it2!=limi_2)
            {
                if(nums1[it1]<nums2[it2])
                {
                    whole.push_back(nums1[it1]);
                    ++it1;
                }
                else
                {
                    whole.push_back(nums2[it2]);
                    ++it2;
                }
            }
            else
            {
                if(it1!=limi_1)
                {
                    whole.push_back (nums1[it1]);
                    ++it1;
                }
                if(it2!=limi_2)
                {
                    whole.push_back(nums2[it2]);
                    ++it2;
                }
            }
        }
        int size = whole.size();
        if(size%2==0)
        {
            int mid = size/2;

            return (double)(whole[mid]+whole[mid-1])/2;
        }
        else
        {
            int mid = floor(size/2);
            return whole[mid];
        }
    }
};