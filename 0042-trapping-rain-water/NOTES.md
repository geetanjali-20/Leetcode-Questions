class Solution {
public:
int trap(vector<int>& height) {
int n = height.size();
int l = 0, r= n-1, lmax = -1, rmax = -1, sum =0;
while(l<r){
lmax = max(lmax,height[l]);
rmax = max(rmax, height[r]);
sum += (lmax<rmax) ? lmax-height[l++] : rmax-height[r--];
}
​
return sum;
}
};