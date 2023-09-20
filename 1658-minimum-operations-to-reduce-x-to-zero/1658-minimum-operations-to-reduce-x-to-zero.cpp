class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0;
        for (int num: nums) sum += num;
        if (sum < x)    return -1;
        sum -= x;
        int left = 0, right = 0, cur = 0;
        int len = n + 1;
        while (right < n) {
            while (right < n && cur < sum) {
                cur += nums[right++];
            }
            while (left < right && cur > sum) {
                cur -= nums[left++];
            }
            if (cur == sum) {
                len = min(len, n - (right - left));
                cur += nums[right++];
            }
        }
        return len == n + 1 ? -1 : len;
    }
};