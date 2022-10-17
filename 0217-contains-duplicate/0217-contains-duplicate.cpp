class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        set<int> s(v.begin(), v.end());
        cout<<s.size();
        if (s.size()==v.size())
            return false;
        return true;
    }
};