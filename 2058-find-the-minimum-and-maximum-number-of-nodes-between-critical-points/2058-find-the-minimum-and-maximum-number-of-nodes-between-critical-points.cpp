class Solution
{
    public:

       	// pushing the index of all critical points in a vector

       	//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
       	//         ListNode *prev =head;
       	//         vector < int>v;
       	//         int i=1;
       	//         while(head->next!=NULL){
       	//             if((prev->val < head->val and head->val > head->next->val) ||(                     prev->val > head->val and head->val < head->next->val)){
       	//                 v.push_back(i);
       	//             }
       	//             prev=head;
       	//             i++;
       	//             head=head->next;
       	//         }

       	//         if(v.size() < 2)           	// no found case
       	//             return {-1,-1};

       	//         sort(v.begin(),v.end());
       	//         int n=v.size()-1;
       	//         int mini=INT_MAX;
       	//          for(int i = 1 ; i < v.size(); i++){
       	//             mini = min(v[i] - v[i - 1], mini);
       	//          }
       	//         int maxi = v[n] - v[0];
       	//         return {mini,maxi};
       	//     }
       	// };

        vector<int> nodesBetweenCriticalPoints(ListNode *head)
        {
            ListNode *prev = head;
            head = head->next;
            int i = 1;
            int mindist = INT_MAX;
            int prev_i = INT_MIN;
            int first_i = -1;
            
            while (head->next!=NULL)
            {
                if ((prev->val < head->val and head->val > head->next->val) || (prev->val > head->val and head->val < head->next->val))
                {
                    
                 // consider case critical points be 3,4,5,6 then also {1,3}   
                    if (prev_i != INT_MIN)
                        mindist = min(mindist, i - prev_i);
                    if (first_i == -1) 
                        first_i = i;
                    prev_i = i;
                }
                prev = head;
                head = head->next;
                i++;
            }
            if (mindist == INT_MAX)
                return { -1,-1 };
            
            
            return {mindist,prev_i - first_i
            };
        }
};