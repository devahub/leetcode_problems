
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false;        
        if(root->left==NULL && root->right==NULL && targetSum-root->val==0){
            return true;
        }
        
        int left=hasPathSum(root->left,targetSum-root->val);
        int right=hasPathSum(root->right,targetSum-root->val);
        
        return left || right;
        
    }
};
    
    
    
    // iterative solution--->
    
//      bool hasPathSum(TreeNode* root, int targetSum) {
//          if(root==NULL)
//              return false;
         
         
//          stack<pair<TreeNode*,int>>st;
//          st.push({root,root->val});
         
//          while(!st.empty()){
//             TreeNode* cur = st.top().first; 
//             int sum = st.top().second;
//             st.pop();
             
//             if(cur->right){
//                 st.push({cur->right,sum+cur->right->val});
//             } 
//             if(cur->left){
//                 st.push({cur->left,sum+cur->left->val});
//             }
             
//             if(cur->right== NULL && cur->left==NULL && targetSum==sum) { 
//                 return true; 
//             }
             
//          }
//         return false;
//      }
// };