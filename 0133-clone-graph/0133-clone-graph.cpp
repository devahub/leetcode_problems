

class Solution {
public:
    
    
//     Node* dfs(Node* cur,unordered_map<Node*,Node*>& mp)
//     {
//         vector<Node*> neighbour;
//         Node* clone=new Node(cur->val);
//         mp[cur]=clone;
//             for(auto it:cur->neighbors)
//             {
//                 if(mp.find(it)!=mp.end())   //already clone and stored in map
//                 {
//                     neighbour.push_back(mp[it]);    //directly push back the clone node from map to neigh
//                 }
//                 else
//                     neighbour.push_back(dfs(it,mp));
//             }
//             clone->neighbors=neighbour;
//             return clone;
//     }
    
    
    
//     Node* cloneGraph(Node* node) {
//         unordered_map<Node*,Node*> mp;      // map has been used as visited array here
//         if(node==NULL)
//             return NULL;
        
        
//         if(node->neighbors.size()==0)   //if only one node present no neighbors
//         {
//             Node* clone= new Node(node->val);
//             return clone; 
//         }
//         return dfs(node,mp);
//     }
// };
    
    
    
    
    // usign visited array------>
    
     void dfs(Node*curr,Node*node,vector<Node*>&vis){
        vis[curr->val]=node;
        
        for(auto ele:curr->neighbors){
            if(!vis[ele->val]){
                Node*newnode=new Node(ele->val);
                (node->neighbors).push_back(newnode);
                dfs(ele,newnode,vis);
            }else{
                (node->neighbors).push_back(vis[ele->val]);
            }
        }
    }
    
    Node* cloneGraph(Node* node) {
        if(node==NULL)return NULL;
        
        vector<Node*>vis(1000,NULL);
        Node*copy=new Node(node->val);
        vis[node->val]=copy;
        
        for(auto curr:node->neighbors){
            if(!vis[curr->val]){
                Node*newnode=new Node(curr->val);
                (copy->neighbors).push_back(newnode);
                dfs(curr,newnode,vis);
            }else{
                (copy->neighbors).push_back(vis[curr->val]);
            }
        }
        return copy;
    }
};