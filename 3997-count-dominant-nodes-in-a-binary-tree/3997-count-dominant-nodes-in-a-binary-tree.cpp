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
    int tree(TreeNode* root,int& c){
        if(root==nullptr)return 0;
        int lf=tree(root->left,c);
        int rt=max(lf,tree(root->right,c));
        int mx=max(rt,root->val);
        if(mx==root->val)c++;
        return mx;
    }
    int countDominantNodes(TreeNode* root) {
        int c=0;
        tree(root,c);
        return c;
    }
};