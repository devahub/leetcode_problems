class Solution {
public:
    bool checkInclusion(string s1, string s2) {
           int n1 = s1.size();
            int n2 = s2.size();

            if (n1 > n2) return false;

            unordered_map<char, int> mp;

            for (auto i: s1)
            {
                mp[i]++;
            }

        
            int i = 0;
            int j = 0;
            int c = mp.size();
            int k = s1.size();

            while (j < n2)
            {
                if (mp.find(s2[j]) != mp.end())
                {
                    mp[s2[j]]--;
                    if (mp[s2[j]] == 0)
                    {
                        c--;
                    }
                }

                if (j - i + 1 < k)
                {
                    j++;
                }
                else if (j - i + 1 == k)
                {
                    if (c == 0)
                        return true;
                    if (mp.find(s2[i]) != mp.end())
                    {
                        mp[s2[i]]++;

                        if (mp[s2[i]] == 1)
                        {
                            c++;
                        }
                    }

                    i++;
                    j++;
                }
            }
            return false;
    }
};