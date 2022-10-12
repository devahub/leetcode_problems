class Solution
{
    public:
       	///        the judge will have indigree 'n-1' and outdigree '0'...thats it!!

       	//         int findJudge(int n, vector<vector < int>> &trust)
       	//         {
       	//             vector<int> in (n + 1, 0);
       	//             vector<int> out(n + 1, 0);

       	//             for (auto &i: trust)
       	//             {
       	//                 in[i[1]]++;
       	//                 out[i[0]]++;
       	//             }

       	//             for (int i = 1; i <= n; i++)
       	//             {
       	//                 if (out[i] == 0 && in[i] == n - 1)
       	//                 {
       	//                     return i;
       	//                 }
       	//             }
       	//             return -1;
       	//         }
       	// };

       	// using map----->

        int findJudge(int n, vector<vector < int>> &trust)
        {
            if (n == 1) return 1;
            map<int, int> m;
            map<int, int> x;
            
            for (int i = 0; i < trust.size(); i++)
            {
                m[trust[i][0]]++;
            }
            
            for (int i = 0; i < trust.size(); i++)
            {
                x[trust[i][1]]++;
            }
            
            for (int i = 0; i <= n; i++)
            {
                if (m[i] == 0 && x[i] == n - 1)
                    return i;
            }
            return -1;
        }
};