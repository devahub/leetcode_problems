class Solution
{
    public:
        string reverseWords(string s)
        {

            string ans = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != ' ')
                {
                    int j = i;
                    string word = "";

                    while (j<s.size() && s[j] != ' ')
                    {
                        word += s[j++];
                    }
                    i = j;
                    ans = word + " " + ans;
                }
            }
            ans.pop_back();
            return ans;
        }
};