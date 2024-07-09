class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1, maxDiff = INT_MIN;
        
        while(left<right)
        {
            int curr = (right-left) * min(height[left],height[right]);
            maxDiff = max(curr,maxDiff);
            
            if(height[left]>height[right]) right--;
            else left++;
        }
        
        return maxDiff;
    }
};