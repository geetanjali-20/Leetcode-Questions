class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int l = nums.size();
        stack<pair<int, int>> s;
        s.push({nums[0], nums[0]});
        
        for (int i = 1; i < l; i++) {
            pair<int, int> q = s.top();
            
            // Pop elements from the stack while the top element's min_value is greater than nums[i]
            while (!s.empty()) {
                pair<int, int> p = s.top();
                if (p.first > nums[i]) {
                    // If the popped element has max_value less than nums[i], return true
                    if (p.second < nums[i])
                        return true;
                    else {
                        break;
                    }
                } else {
                    s.pop();
                }
            }
            
            // Push a pair containing nums[i] as min_value and the minimum of the current pair's min_value and max_value as max_value
            // This updates the potential "2" element
            s.push({nums[i], min(q.first, q.second)});
        }
        
        return false;
    }
};