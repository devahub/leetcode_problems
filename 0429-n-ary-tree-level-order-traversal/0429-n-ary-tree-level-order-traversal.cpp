
class Solution {
public:
    
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        
        if(root==NULL)return {};
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            vector<int>v;
            for(int i=0;i<size;i++){
                Node* temp=q.front();
                q.pop();
                v.push_back(temp->val);
                for(auto i:temp->children) {    // moving to its children instead of left right
                    q.push(i);
                }
            }
            res.push_back(v);
        }
        return res;
        }
};
    
      