
class Solution {

//      int solve(TreeNode* root,int maxi){
//         if(!root)return 0;
//          int c=0;
        
//         if(root->val>=maxi){
//             maxi=root->val;
//             c++;
//         }
//              return  c +solve(root->left,maxi)+solve(root->right,maxi);   
//         }
    
//     public:
//      int goodNodes(TreeNode* root) {
        
//         if(!root)return 0;
        
//         return solve(root,root->val);
//         }
// };
    
    
    
    int c=0;
    void solve(TreeNode* root,int maxi){
        if(!root)return;
        
        if(root->val>=maxi){
            c++;
            maxi=root->val;
        }
        solve(root->left,maxi);
        solve(root->right,maxi);
    }
    
    public:
      int goodNodes(TreeNode* root) {
         solve(root,root->val); 
          return c;
      }
};