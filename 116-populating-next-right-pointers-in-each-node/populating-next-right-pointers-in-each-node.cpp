/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
      
        if(root==nullptr)
        return root;
        queue<Node*>qu;
        qu.push(root);
        while(!qu.empty()){
            int size=qu.size();
            Node* prev = nullptr;
            for(int i=0;i<size;i++){
            Node *node=qu.front();
            qu.pop();
            if(prev!=nullptr) prev->next=node;  // to connect the node 
            prev=node;
            if(node->left!=nullptr) qu.push(node->left);
            if(node->right!=nullptr) qu.push(node->right); 
            }

            // Last node of the level points to NULL
            prev->next = nullptr;   // there will be no more node 
            }
      return root;
    }
};