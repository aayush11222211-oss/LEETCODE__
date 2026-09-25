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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // to store the final output 
        
        vector<vector<int>>list;
        if(root==nullptr) 
        return list;

        queue<TreeNode*>qu;
        // insert root into the queue
        qu.push(root);
        // while loop ubtill qu will be emoty
        while(!qu.empty()){
            int size=qu.size();
            vector<int> result;
            for(int i=0;i<size;i++){
                 TreeNode* node=qu.front();
                  qu.pop();
                  // now check thet left or right are present or  not for the node;
                  if(node->left!=nullptr) qu.push(node->left);
                  if(node->right!=nullptr) qu.push(node->right);
                  result.push_back(node->val);
               

            }
            list.push_back(result);
        }
       return list ;

    }
};