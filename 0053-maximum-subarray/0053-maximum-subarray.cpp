class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int total_sum =0;

        for (int i=0 ; i<nums.size();++i)
        {
            total_sum += nums[i];
            if(total_sum>max_sum)
            {
                max_sum = total_sum;
                
            }
            if(total_sum <0)
            {
                total_sum =0;
            }
        }
        return max_sum;
    }
};