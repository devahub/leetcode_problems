
class Solution {
public:
        //brute force---->
    
    
        bool getPath(TreeNode *root,vector<TreeNode *> &res, int x){

        if(root == NULL){
            return false;
        }

        res.push_back(root);

        if(root->val == x) return true;

        if(getPath(root->left,res,x) || getPath(root->right,res,x)) return true;

        res.pop_back();
        return false;
    }
    
    
    
        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
            TreeNode *res;

            if(!root){
                return {};
                }
        
            vector<TreeNode *> v1;
            vector<TreeNode *> v2;
            
               getPath(root,v1,p->val);
               getPath(root,v2,q->val);

        int n = min(v1.size(),v2.size());

        for(int i=0;i<n;i++){
            if(v1[i] == v2[i]){
                res = v1[i];
            }else{
                break;
            }
        }
        return res;
    }
};
    
    
  
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//          if(root==NULL){
//             return NULL;
//         }
//          if(root==p || root==q){
//             return root;
//          }
//         TreeNode* left;
//         TreeNode* right;
        
//         left=lowestCommonAncestor(root->left,p,q);
//         right=lowestCommonAncestor(root->right,p,q);
        
        
//         if(left==NULL){
//             return right;
//         }
        
//         else if(right==NULL){
//             return left;
//         }
        
//         else{
//             return root;
//         }
//     }
// };