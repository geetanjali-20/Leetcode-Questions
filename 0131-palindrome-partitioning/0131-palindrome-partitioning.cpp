class Solution {
public:
    void solve(string s,int ind,vector<string> &ds,vector<vector<string>> &ans)
    {
        if(ind==s.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<s.size();i++)
        {
            if(ispalindrome(s,ind,i)==true)
            {
                ds.push_back(s.substr(ind,i-ind+1));
                solve(s,i+1,ds,ans);
                ds.pop_back();
                
            }
        }
    }
    
    bool ispalindrome(string s,int beg,int end)
    {
        while(beg<=end)
        {
            if(s[beg++]!=s[end--])
                return false;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        solve(s,0,ds,ans);
        return ans;
    }
};