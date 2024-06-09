class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // create subarray with either 5 or 0.
        int ans = 0;
        int prefix = 0;
        vector<int> count(k);
        count[0] = 1;

        for (int a : nums) {
            prefix = (prefix + a % k + k) % k;
            ans += count[prefix];
            ++count[prefix];
         }
        return ans;      
    }
};