class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        bool b = false;
        for (int i =0; i<nums.size();++i)
        {
            if(s.find(nums[i])==s.end())
            {
                s.insert(nums[i]);
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