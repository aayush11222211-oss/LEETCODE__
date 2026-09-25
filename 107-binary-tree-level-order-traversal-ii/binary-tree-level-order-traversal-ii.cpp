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
    vector<vector<int>> levelOrderBottom(TreeNode* root) { // level order traversal 
        vector<vector<int>>list;
        if(root==nullptr)
        return list;
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()){
            vector<int>ans;
            int size=qu.size();
            for(int i=0;i<size;i++){
            TreeNode *root=qu.front();
            qu.pop();
            if(root->left!=nullptr) qu.push(root->left);
            if(root->right!=nullptr) qu.push(root->right);
            ans.push_back(root->val);
            }
            list.push_back(ans);
        }
        reverse(list.begin(),list.end());  // we want in reverse order 
        return list;
    }
};