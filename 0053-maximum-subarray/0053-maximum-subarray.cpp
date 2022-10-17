class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=0;
        int maxsum=INT_MIN;
        for(auto i: nums)
        {
            s+=i;
            maxsum=max(maxsum,s);
            if(s<0)
                s=0;
        }
        return maxsum;
    }
};