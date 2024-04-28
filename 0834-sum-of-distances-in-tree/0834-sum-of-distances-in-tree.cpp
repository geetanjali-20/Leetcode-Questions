class Solution {
    void dfs1(int node, int p, vector<int> adj[], vector<int> &count, vector<int> &pathSum)
    {
        for(auto &child: adj[node])
        {
            if(child != p){
                dfs1(child, node, adj, count, pathSum);
                count[node] += count[child];
				// pathSum[parent] = pathSum of child + contribution of connecting edge(count[child])
                pathSum[node] += count[child]+pathSum[child];
            }  
        }
        // count of nodes in each subtree
        count[node]++;
    }
    void dfs2(int node, int p, vector<int> adj[], vector<int> &pathSum, vector<int> &count, int &n)
    {
        for(auto &child: adj[node])
        {
            if(child == p) continue;
			// explained above
            pathSum[child] = pathSum[node]-count[child]+(n-count[child]);
            dfs2(child, node, adj, pathSum, count, n);
        }
    }
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for(auto &e: edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<int> cntOfNodes(n, 0), pathSum(n, 0);
		
		// calculate nodes in each subtree and pathSum of all childs for each node
        dfs1(0, -1, adj, cntOfNodes, pathSum);
		
		// to calculate pathSum for nodes except 0
        dfs2(0, -1, adj, pathSum, cntOfNodes, n);
        
        return pathSum;
    }
};