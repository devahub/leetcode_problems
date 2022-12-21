
class Solution {
public:
    
  // brute force------>  
    
//     vector<int> solve(TreeNode *root , int q){
//         TreeNode* p = root;
//         int lb = INT_MIN ;
//         int ub =  INT_MAX;
        
//         while(p){
            
//             if(p->val<q){
//                 lb=max(lb,p->val);
//                 p=p->right;
//             }
            
//             else if(p->val>q){
//                 ub=min(ub,p->val);
//                 p=p->left;
//             }
            
//             else{
//                 return {p->val , p->val};
//             }
//         }
        
//         if(lb == INT_MIN) 
//             lb = -1;
//         if(ub == INT_MAX) 
//             ub = -1;
        
//         return {lb , ub};  
//     } 
    
    
    
//     vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
//         vector<vector<int>>ans(queries.size());
//         int i=0;
//         for(auto q:queries){
//             ans[i++]=solve(root,q);
//         }
//     return ans;
//     }
// };








// approach---->2

// using binary search and inorder 

    
    
    vector<int> v;
    void Inorder(TreeNode* node)                    /// pushing inorder in vector v
    {
        if (node == NULL)
            return;
        Inorder(node->left);
        v.push_back(node->val);
        Inorder(node->right);
    }
    
    
    
vector<int> binarySearch(int x, int low, int high) {
   
    int mini = -1;
    int maxi = -1;
    
    
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (v[mid] == x)
      return {v[mid], v[mid]};

    if (v[mid] < x){
      low = mid + 1;
      mini = v[mid];
    }
      
    else{
      high = mid - 1;
      maxi = v[mid];
    }
  }

  return {mini, maxi};
}
    
    
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& q) {
        Inorder(root);
        vector<vector<int>> ans;
        for(int i=0; i<q.size(); i++){
            ans.push_back(binarySearch(q[i], 0, v.size()-1));
        }
        return ans;
    }
};


