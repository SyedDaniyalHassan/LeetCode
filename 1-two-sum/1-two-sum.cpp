class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
         vector<int> ret;
        for (int i=0 ;i<nums.size();++i)
        {
            int sub = target - nums[i];
            if(umap.find(sub)!=umap.end())
            {
               
                ret.push_back(i);
                ret.push_back(umap[sub]);
                break;
            }
            else
            {
                umap[nums[i]] = i;
            }
        }
        return ret;
        
    }
};