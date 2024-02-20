class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actualSum = (n*(n+1))/2;
        int expectedSum = 0;
        for(int i=0 ; i<n ; i++)
        {
            expectedSum += nums[i];
        }
        return actualSum-expectedSum;
    }
};