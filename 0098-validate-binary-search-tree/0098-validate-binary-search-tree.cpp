class Solution {
public:
    
//    bool solve(TreeNode* root,long l,long h){
//         if(root==NULL)return true;
        
//         if(root->val<h && root->val>l)
//         {
//             return solve(root->left,l,root->val) && solve(root->right,root->val,h);
//         }
//         else{
//             return false;
//         }
        
//     }
    
//     bool isValidBST(TreeNode* root) {
     
//      return solve(root,LONG_MIN,LONG_MAX); 
//      }
// };

    
    
    
    
// 2nd approach-->
        
//         if(!root) return true;
//         if(root->val <= minv || root->val >= maxv)
//             return false;

//         bool left = helper(root->left,minv,root->val);
//         bool right = helper(root->right,root->val,maxv);
//         return (left && right);

    
    
    
    
     // 3rd approach
    
         vector<int> res;
    
    void inorder(TreeNode* root) {
        if(root == NULL) return;
        
        inorder(root->left);
        res.push_back(root->val);
        inorder(root->right); 
    }
    
    bool isValidBST(TreeNode* root) { 
        inorder(root);
        for(int i=1;i<res.size();i++){
            if(res[i]<=res[i-1])
                return false;
        }
        return true;
        }
    
};
        
        
        