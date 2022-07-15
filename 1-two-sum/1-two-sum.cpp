class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        int i=0,sub=0;
        for ( i=0 ;i<nums.size();++i)
        {
            sub = target - nums[i];
            if(umap.find(sub)!=umap.end())
            {
                break;
            }
            umap[nums[i]] = i;            
        }
        return {i,umap[sub]};
        
    }
};