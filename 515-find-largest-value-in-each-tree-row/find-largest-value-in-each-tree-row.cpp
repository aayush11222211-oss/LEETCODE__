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
    vector<int> largestValues(TreeNode* root) {
        vector<int>list;
        if(root==nullptr)
        return list;
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()){
            int size=qu.size();
            int maxii=INT_MIN;
         
            for(int i=0;i<size;i++){
                TreeNode* node=qu.front();
                 qu.pop();
                 maxii = max(node->val, maxii);
                 if(node->left!=nullptr) qu.push(node->left);
                 if(node->right!=nullptr) qu.push(node->right);

             
          }    
            list.push_back(maxii);
                
         }
      return list;
    }
};