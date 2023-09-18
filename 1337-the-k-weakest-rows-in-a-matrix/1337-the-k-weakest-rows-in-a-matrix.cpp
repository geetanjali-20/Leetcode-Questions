class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue< pair<int, int> > que;
        int irow = 0;
        for(auto row : mat){
            int isol = 0;
            for(auto e : row)
                isol += e;
            que.push(make_pair(isol, irow++));
            if(que.size() > k)
                que.pop();
        }
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(que.top().second);
            que.pop();
        }
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};