class Solution
{
    public:

       	// using merge sort---->

        void merge(vector<int> &nums, int low, int mid, int high)
        {
            if (low >= high) return;
            int l = low, r = mid + 1, k = 0, size = high - low + 1;
            vector<int> sorted(size, 0);
            
            while (l <= mid and r <= high)
                sorted[k++] = nums[l] < nums[r] ? nums[l++] : nums[r++];
            while (l <= mid)
                sorted[k++] = nums[l++];
            while (r <= high)
                sorted[k++] = nums[r++];
            for (k = 0; k < size; k++)
                nums[k + low] = sorted[k];
        }

    void mergeSort(vector<int> &nums, int l, int r)
    {
        if (l >= r)	//remember to put the equal to sign
            return;

        int mid = l + (r - l) / 2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        merge(nums, l, mid, r);
    }

    vector<int> sortArray(vector<int> &nums)
    {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};