
class Solution {
public:
//         if(root==NULL)
//             return {};
        
//         vector<vector<int>>res;
//         queue<TreeNode*>q;
//         q.push(root);
//         TreeNode* temp;
        
//         while(!q.empty()){
            
//             vector<int>v;
//             int l=q.size();
            
//             for(int i=0;i<l;i++){
//                 temp=q.front();
//                 q.pop();
//                 v.push_back(temp->val);
                
//                 if(temp->left!=NULL)
//                     q.push(temp->left);
                
//                 if(temp->right!=NULL)
//                     q.push(temp->right);
//             }
//             res.push_back(v);          
//             }
//         return res;
//          }
// };
        
        
    
    
    
    
    
        // recurssive soln
        
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            vector<int>v;
            for(int i=0;i<size;i++){
                TreeNode *node=q.front();
                q.pop();
            if(node->left!=NULL)
                q.push(node->left);
            if(node->right!=NULL)
                q.push(node->right); 
                
            v.push_back(node->val);
        }
            ans.push_back(v);
        }
        return ans;
        
    }
};
        
        
        