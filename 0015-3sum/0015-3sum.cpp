class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            if(i!=0 && nums[i] == nums[i-1]) continue;
            
            int j=i+1,k=n-1;
            while(j<k)
            {
                int tripletSum = nums[i]+nums[j]+nums[k];
                if(tripletSum>0)
                {
                    k--;
                }
                else if(tripletSum<0)
                {
                    j++;
                }
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;   
                }
            }
            
        }
        
        return ans;
        
    }
};