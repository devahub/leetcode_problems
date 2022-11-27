
class Solution {
public:
    
    // using recurssion---->
    
//     void solve(TreeNode* root,vector<int>&v){
//     if(root==NULL){
//         return;
//     }    
//         solve(root->left,v);
//         v.push_back(root->val);
//         solve(root->right,v);
//     }
    
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int>v;
//         solve(root,v);
//         return v;
//     }
// };
    
    // iterative approach--->important 
    
    vector<int> inorderTraversal(TreeNode* root){
        stack<TreeNode*>st;
        vector<int>v;
        
        while(root || !st.empty()){
            if(root!=NULL){
                st.push(root);
                root=root->left;
            }
            else{
                root=st.top();
                st.pop();
                v.push_back(root->val);
                root=root->right;
            }
        }
        
        return v;
    }
};