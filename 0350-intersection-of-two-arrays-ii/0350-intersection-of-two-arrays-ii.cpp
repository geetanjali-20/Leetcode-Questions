class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> n1;
        for(int i : nums1)
        {
            n1[i]++;
        }
        vector<int> ans;
        for(int i: nums2)
        {
            if(n1[i] > 0)
            {
                ans.push_back(i);
                n1[i]--;
            }
        }
        return ans;
    }
};