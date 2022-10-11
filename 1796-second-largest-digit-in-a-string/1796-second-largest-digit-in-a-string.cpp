class Solution {
public:
    int secondHighest(string s) {
        set<int> x;
        for(auto c:s)
        {
            if (isdigit(c))
                x.insert(c-'0');
        }
        
        return x.size()>1?*next(rbegin(x)):-1;
        
    }
};