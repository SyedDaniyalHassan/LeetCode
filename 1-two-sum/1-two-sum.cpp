class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> umap;
         vector<int> ret;
        for (int i=0 ;i<nums.size();++i)
        {
            int sub = target - nums[i];
            if(umap.find(sub)!=umap.end())
            {
               
                ret.push_back(i);
                ret.push_back(umap[sub][0]);
                break;
            }
            else
            {
                umap[nums[i]].push_back(i);
            }
        }
        return ret;
        
    }
};