
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root==NULL)
            return 0;
        int lh = minDepth(root->left);
        int rh = minDepth(root->right);
        
        return 1 + (min(lh, rh) ? min(lh, rh) : max(lh, rh));
    }
};