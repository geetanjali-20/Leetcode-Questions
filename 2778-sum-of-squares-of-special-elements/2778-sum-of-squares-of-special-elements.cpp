class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
    	int i=1,n=nums.size(), s=0;
    	while(i<=n)
    	{
    		if(n % i == 0)
            {
                s+=nums[i-1]*nums[i-1];
            }
            i++;
    	}    
    	return s;
    }
};