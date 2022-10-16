class Solution {
public:
    int minDifficulty(vector<int>& arr, int d) {
        int n=arr.size(),inf = 1e9,maxd;
        if(n<d)
            return -1;
        vector<int> dp(n+1,1e9);
        dp[n]=0;
        for(int j=1;j<=d;++j)
        {
            for(int i=0;i<=n-j;++i)
            {
                maxd=0;
                dp[i]=inf;
                for(int k=i;k<=n-j;++k)
                {
                    maxd=max(maxd,arr[k]);
                    dp[i]=min(dp[i],maxd+dp[k+1]);
                }
            }
        }
        return dp[0];
    }
};