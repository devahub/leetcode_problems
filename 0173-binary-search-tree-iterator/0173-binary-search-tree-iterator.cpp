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
class BSTIterator {
public:
    
    
//     vector<int>v;
//       int c=0;
    
//     BSTIterator(TreeNode* root) {
//      inorder(root);   
//     }
    
//     int next() {
//         c++;
//         return v[c-1];
//     }
    
//     bool hasNext() {
//         return c!=v.size();
//     }
//     private:
    
//     void inorder(TreeNode* root){
        
//        if(root==NULL)return;
        
//         inorder(root->left);
//         v.push_back(root->val);
//         inorder(root->right);
        
//     }
   
    
// };





//   appproachh---->2


  stack<TreeNode*> s;
  
BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    void inorder(TreeNode* root){
        while(root != NULL){
            s.push(root);
            root = root->left;
        }
    }
    
    int next() {
        TreeNode* top = s.top();
        s.pop();
        inorder(top->right);
        return top->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }
};
