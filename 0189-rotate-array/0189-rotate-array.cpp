class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        // while(k--)
        // {
        //     int x=nums[n-1];
        //     for(int i=n-1;i>0;i--)
        //     {
        //         nums[i]=nums[i-1];
        //     }
        //     nums[0]=x;
        // }
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};