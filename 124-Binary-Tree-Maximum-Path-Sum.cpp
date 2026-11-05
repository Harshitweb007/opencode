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
int pass(TreeNode* root,int &mx){
    if(root==nullptr){
        return 0;
    }
    int lh=max(0,pass(root->left,mx));
    int rh=max(0,pass(root->right,mx));
    mx=max(mx,lh+rh+root->val);
    return max(lh,rh)+root->val;
}
    int maxPathSum(TreeNode* root) {
        int mx=INT_MIN;
        pass(root,mx);
        return mx;
        
    }
};