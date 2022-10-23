class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int res1,res2=0;
        for(int x:nums){
            if(nums[abs(x)-1]<0)
                res1=abs(x);
            else
                nums[abs(x)-1]*=-1;
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0)
                res2=i+1;
        }
        return {res1,res2};
    }
};