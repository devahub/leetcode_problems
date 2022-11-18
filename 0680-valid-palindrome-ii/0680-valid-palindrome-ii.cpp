class Solution
{
    public:

    // we will check from left+1 to right or left to right-1 only because rest string we have already checked that it is palindrome
    
        bool ispal(string s,int l,int h)
        {
            
            while (l <= h)
            {
                if (s[l++] != s[h--])
                {
                    return false;
                }
            }
            return true;
        }

    bool validPalindrome(string s)
    {
        int left = 0, right = s.length() - 1;
        while (left < right)
        {
            if (s[left] != s[right])
            {
                return ispal(s, left + 1, right) || ispal(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
};