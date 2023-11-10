class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int sum=0,l=0,r=n-1,lmax=-1,rmax=-1;
        while(l<=r)
        {
            lmax = max(lmax,height[l]);
            rmax = max(rmax,height[r]);
            if(lmax<rmax)
            {
                sum+= lmax - height[l];
                l++;
            }
            else
            {
                sum+= rmax - height[r];
                r--;
            }
        }
        return sum;
    }
};