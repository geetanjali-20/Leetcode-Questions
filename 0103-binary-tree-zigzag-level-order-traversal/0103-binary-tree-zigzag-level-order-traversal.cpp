/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        bool flag = true;
        if(root == NULL)
            return res;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty())
        {
            int size = qu.size();
            vector<int> ds(size);
            
            for(int i = 0 ; i<size; i++){
                TreeNode* x = qu.front();
                qu.pop();
                int index = flag ? i : (size - 1 - i);
                ds[index]=x->val;
                if(x->left !=NULL)
                    qu.push(x->left);
                if(x->right !=NULL)
                    qu.push(x->right);
                
            }
            
            res.push_back(ds);
            flag = !flag;
            
            
        }
        
        return res;
        
      
        
    }
};