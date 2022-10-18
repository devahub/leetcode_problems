class Solution
{
    public:
      
        string countAndSay(int n)
        {
            string ans = "1";
            string c;

            while (n != 1)
            {
                c = "";
                for (int i = 0; i < ans.size(); i++)
                {
                    int t = 1;
                    while (i < ans.size() && ans[i] == ans[i + 1])
                    {
                        t++;
                        i++;
                    }
                    c = c + to_string(t) + ans[i];
                }

                n--;
                ans = c;
            }

            return ans;
        }
};