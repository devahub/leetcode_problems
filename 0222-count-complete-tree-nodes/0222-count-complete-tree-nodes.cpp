
class Solution {
public:
    // using level order traversal----->
    
//     int countNodes(TreeNode* root) {
//         if(root==NULL)
//             return 0;
//         int c=0;
//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty()){
//            int n=q.size();
//             c+=n;
//             for(int i=0;i<n;i++){
//                 TreeNode * curr=q.front();
//                 q.pop();
//                 if(curr->left!=NULL)
//                     q.push(curr->left);
//                 if(curr->right!=NULL)
//                     q.push(curr->right);
//             }
            
//         }
//         return c;
//     }
// };
    
    
    
    
    
    // recurssive solution---->
    
    int countNodes(TreeNode* root){
        if(root==NULL)return 0;
        
        return countNodes(root->left)+countNodes(root->right)+1;
    }
};