class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> s;
        bool b = false;
        for (int i =0; i<nums.size();++i)
        {
            if(s.find(nums[i])==s.end())
            {
                s[nums[i]] =1;
            }
            else
            {
                b = true;
                break;
            }
        }
        return b;
    }
};