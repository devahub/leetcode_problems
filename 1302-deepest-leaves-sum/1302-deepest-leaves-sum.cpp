
class Solution {
public:
    // approach---> we are first finding the height whose leaves we have to add 
    //              then we adding the leaves of that height
    

//     int solve(TreeNode* root,int h){
//         if(!root)return 0;
//         if(h==1)return root->val;
//         return solve(root->left,h-1)+solve(root->right,h-1);
        
//     }
    
    
    
//     int getdepth(TreeNode* root){
//         if(root==NULL)return 0;
//         return 1+max(getdepth(root->left),getdepth(root->right));
//     }
    
//       int deepestLeavesSum(TreeNode* root) {
//         int d=getdepth(root);
//         return solve(root,d);
//     }
// };
    
    
    // using bfs go to last level and return its sum
    
    int deepestLeavesSum(TreeNode* root){
        if(!root)return 0;
        int sum;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            sum=0;   // initialised with 0 so that last it returns the sum when it is last level
            
            int size=q.size();
            
            for(int i=0;i<size;i++){
                TreeNode* front = q.front();
                q.pop();
        
                sum += front->val;
                
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                
            }
        }
        return sum;
        
    }
};
    
    
    
   