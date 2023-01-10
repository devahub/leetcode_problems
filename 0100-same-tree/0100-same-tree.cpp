class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
//         if(p==NULL && q==NULL)
//             return true;
//         if(p==NULL || q==NULL)
//             return false;
        
        
//         if(p->val!=q->val)
//             return false;
        
//         return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        
        
        
//     }
// };
        
        // iterative approach--->
        
        queue<TreeNode*>que;
        
        que.push(p);
        que.push(q);
        
        while(!que.empty()){
            
            TreeNode* i=que.front();
            que.pop();
            
            TreeNode* j=que.front();
            que.pop();
            if(i==NULL && j==NULL)continue;
            if(i==NULL || j==NULL)return false;
            
            if(i->val!=j->val){
            return false;                
            }
            que.push(i->left);
              que.push(j->left);
              que.push(i->right);
              que.push(j->right);
            
        }
        return true;
    }
};