class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
       unordered_map<int,int> umap;
        for(int i=0;i<v.size();i++)
        {
            umap[v[i]]++;
            if(umap[v[i]]>1)
            {
                return true;
            }
        }
       
        return false;
    }
};