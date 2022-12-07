
class Solution {
public:
    
    
    // using preorder---->
    
//     void solve(TreeNode* root,int low,int high,int& sum){
        
//         if(!root){
//             return;
//         }
//         if(root->val>=low && root->val<=high){
//             sum+=root->val;
//         }
//         if(root->val>low){
//             solve(root->left,low,high,sum);
//         }
//         if(root->val<high){
//             solve(root->right,low,high,sum);
//         }
//     }
    
    
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         int sum=0;
//         solve(root,low,high,sum);
//         return sum;
//     }
// };
    
    
    
    
    // using inorder------>
    
      void inorder(TreeNode* node, int &low, int &high, int &sum)
    {
        if(!node) return;
        inorder(node->left, low, high, sum);
        if(node->val >= low && node->val <= high) sum += node->val;
        inorder(node->right, low, high, sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        int sum=0;
        inorder(root, low, high, sum);
        return sum;  
    }
};
    