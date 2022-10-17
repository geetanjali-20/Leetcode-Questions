class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int k=0;
        for(auto i : nums)
        {
            if(i==1)
            {
                k++;
                ans=max(ans,k);
            }
            if(i==0)
                k=0;
        }
        return ans;
    }
};