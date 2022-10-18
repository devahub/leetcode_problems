class Solution
{
    public:

       	//         string countAndSay(int n)
       	//         {
       	//             string ans = "1";
       	//             string c;

       	//             while (n != 1)
       	//             {
       	//                 c = "";
       	//                 for (int i = 0; i < ans.size(); i++)
       	//                 {
       	//                     int t = 1;
       	//                     while (i < ans.size() && ans[i] == ans[i + 1])
       	//                     {
       	//                         t++;
       	//                         i++;
       	//                     }
       	//                     c = c + to_string(t) + ans[i];
       	//                 }

       	//                 n--;
       	//                 ans = c;
       	//             }

       	//             return ans;
       	//         }
       	// };

       	// recurssive approach----->

        string countAndSay(int n)
        {
            if (n == 1) return "1";
            string res = "";
            string s = countAndSay(n - 1);
            char ch = s[0];
            int c = 1;
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] == ch)
                    c++;
                else
                {
                    res += to_string(c);
                    res += ch;
                    ch = s[i];
                    c = 1;
                }
            }

            res += to_string(c);
            res += ch;

            return res;
        }
};