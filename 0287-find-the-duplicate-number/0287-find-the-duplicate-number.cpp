class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums[0];
        for (auto iter: nums)
        {
            if(iter>n)
                n=iter;
        }
        n=n+1;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=0;
        }
        for (int i = 0; i < nums.size(); i++) {
            
            arr[nums[i]]+=1;
            if(arr[nums[i]]==2)
                return nums[i];
            }
        
        return -1;
    }
};