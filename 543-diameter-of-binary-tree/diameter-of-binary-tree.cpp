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
int check(TreeNode* root, int& maxii){
    if(root==nullptr) return 0;
    int left=check(root->left,maxii);
    int right=check(root->right,maxii);
    // max diameter after every iteration 
    maxii=max(maxii,left+right);
    return 1+max(left,right);
}
    int diameterOfBinaryTree(TreeNode* root) {
        int maxii=0;
        check(root,maxii);
       return maxii;
    }
};