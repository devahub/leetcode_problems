
class Solution {
public:
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
        
//         if(lb == INT_MIN) lb = -1;
//         if(ub == INT_MAX) ub = -1;
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
    void printInorder(TreeNode* node)
    {
        if (node == NULL)
            return;
        printInorder(node->left);
        v.push_back(node->val);
        printInorder(node->right);
    }
vector<int> binarySearch(int x, int low, int high) {
    int mini = -1, maxi = -1;
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
        printInorder(root);
        vector<vector<int>> ans;
        for(int i=0; i<q.size(); i++){
            ans.push_back(binarySearch(q[i], 0, v.size()-1));
        }
        return ans;
    }
};


