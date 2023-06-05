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

    int helper(TreeNode* root){
        if(root==NULL)return 0;

        return 1+max(helper(root->left),helper(root->right));


    }


    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        int ans1=helper(root->left)+helper(root->right);
        int ans2=diameterOfBinaryTree(root->left);
        int ans3=diameterOfBinaryTree(root->right);
        return max(max(ans1,ans2),ans3);
    }
};