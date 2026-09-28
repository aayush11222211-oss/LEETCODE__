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
        vector<vector<int>>list;
        if(root==nullptr)
        return list;// empty 

        int flag= 0 ;   // 0 means left to right 
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty()){
            int size=qu.size();
            vector<int> ans;
            for(int i=0;i<size;i++){
                TreeNode* root=qu.front();
                qu.pop();
                ans.push_back(root->val);
                
                if(root->left!=nullptr) qu.push(root->left);
                if(root->right!=nullptr) qu.push(root->right);

            }
             if (flag == 1)
                reverse(ans.begin(), ans.end());  // means right to left 

                list.push_back(ans);
                flag=1-flag;


        }
        return list;
    }
};