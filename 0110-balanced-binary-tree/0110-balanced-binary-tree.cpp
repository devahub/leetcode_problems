class Solution {
public:
    
    
// A balanced binary tree, also referred to as a height-balanced binary tree, is defined as a binary tree in which the height of the left and right subtree of any node differ by not more than 1.
    
    
    
    //// appraoch----->1
    
//     bool ans;
    
//     int solve(TreeNode* root){
//         if(!root)
//             return 0;
        
//         int left=solve(root->left);
//         int right=solve(root->right);
        
//         if(abs(left-right)>1)
//             ans=false;
        
//         return max(left,right)+1;
//     }
    
//     bool isBalanced(TreeNode* root) {
//         ans=true;
//         solve(root);
//         return ans;
//     }
// };
    
    
    
    
    
    
    ///// approach-->2
    
    int height(TreeNode* root){
        if(root==NULL)return 0;
        
        int lefth=height(root->left);
        int righth=height(root->right);
        
        if(lefth==-1 || righth==-1 || abs(lefth-righth)>1){
            return -1;
        }
        
        return max(lefth,righth)+1;
    }
    
    
    
     bool isBalanced(TreeNode* root){
    
         if(root==NULL)return true;
         
         if(height(root)==-1)return false;
         
         return true;
     }
};