
class Solution {
public:
    
    // using bfs-->level order traversal
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>res;
        if(!root) 
            return res;
        queue<TreeNode*>q;
        q.push(root);
        int c=1;        // work as a switch/flag
        
        while(!q.empty())
        {
            int size=q.size();
            
            vector<int>v;
            while(size--)
            {
                root=q.front();
                q.pop();
                v.push_back(root->val);
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
            if(c%2==0){
                reverse(v.begin(),v.end());
                
            }
            res.push_back(v);
            
          c++;  
        }
        return res;
    }
};