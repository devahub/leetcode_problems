
class Solution {
public:
    
    // recurssion--->
    
    
 int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
     
     int l=maxDepth(root->left);
     int r=maxDepth(root->right);
     
     return 1+max(l,r);      // 1 for the root
        
    }
};
    
    
    
    
    
    // using bfs--->  iterative 
    
//    int maxDepth(TreeNode* root) {
//         if (root==NULL) return 0; 
//         queue<TreeNode*> q;
//         q.push(root);
//         int depth=0;
        
//         while (!q.empty()) {
//             ++depth;
//             int s=q.size();
//             for (int i=0; i<s; i++) {
//                 TreeNode* front=q.front();
//                 q.pop();
                
//                 if (front->left) q.push(front->left);
//                 if (front->right) q.push(front->right);
//             }
//         }
//     return depth;
//     }
// };