class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap; 
        for (int i=0;i<nums.size();i++)
        {
            int secondNumber = target - nums[i];
            if(umap.find(secondNumber)!=umap.end() && umap[secondNumber] != i)
            {
                return {i,umap[secondNumber]};
            }
            umap[nums[i]] = i;
        }
        return {};
        
    }
};