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
    int depth(TreeNode* root){
        if(root==nullptr)return 0;
        return 1+depth(root->left)+depth(root->right);
    }
    int dfs(TreeNode* root,int &c){
        if(root==nullptr)return 0;
        int avg=depth(root);

        int lavg=dfs(root->left,c);
        int ravg=dfs(root->right,c);
        int ans=lavg+ravg+root->val;
        if(floor(ans/avg)==root->val){
            c++;
        }

        return ans;
    }
    int averageOfSubtree(TreeNode* root) {
        int c=0;
        int t=dfs(root,c);
        return c;
    }
};