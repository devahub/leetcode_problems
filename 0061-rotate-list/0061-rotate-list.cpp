class Solution
{
   	// public:

   	//brute force approach--->  

   	//     void reverse(vector<int>&nums,int i,int j)
   	//     {
   	//         int l=i;
   	//         int r=j;

   	//         while(l < r){
   	//             int temp=nums[l];
   	//             nums[l]=nums[r];
   	//             nums[r]=temp;
   	//             l++;
   	//             r--;
   	//         }
   	//     }    

   	//      void rotate(vector<int>& nums, int k) {

   	//         k=k%nums.size();

   	//         reverse(nums,0,nums.size()-k-1);
   	//         reverse(nums,nums.size()-k,nums.size()-1);
   	//         reverse(nums,0,nums.size()-1);

   	//       }

   	//     ListNode* rotateRight(ListNode* head, int k) {
   	//         if(head==NULL)return 0;

   	//         vector < int>v;

   	//         ListNode* cur=head;

   	//         while(cur!=NULL){
   	//             v.push_back(cur->val);
   	//             cur=cur->next;
   	//         }

   	//         rotate(v,k);

   	//         cur = head;
   	//             for(auto i:v){
   	//                 cur->val = i;
   	//                 cur = cur->next;
   	//             }
   	//             return head;  

   	//     }
   	// };

    
    
    
   	// optimal solution---->refer to striver
   	//  1->2->3->4->5          let k=2;
   	//   l=5             5-2=3            ans===>   4->5->1->2->3

    public:
        ListNode* rotateRight(ListNode *head, int k)
        {

            if (head == NULL || head->next == NULL)
            {
                return head;
            }

            ListNode *cur = head;
            int l = 1;
            while (cur->next != NULL)
            {
                l++;
                cur = cur->next;
            }

            cur->next = head;
            k = k % l;
            k = l - k;

            while (k--)
            {
                cur = cur->next;
            }

            head = cur->next;
            cur->next = NULL;

            return head;
        }
};