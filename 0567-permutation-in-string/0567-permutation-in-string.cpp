class Solution
{
    public:
       	//     bool checkInclusion(string s1, string s2) {
       	//         if(s1.size() > s2.size())
       	//             return false;

       	//         vector < int>count1(26,0), count2(26,0);

       	//         int i;
       	//         for(i = 0; i < s1.size(); i++) {
       	//            	// compute the frequency of each char for the first window
       	//             count1[s1[i] - 'a']++;
       	//             count2[s2[i] - 'a']++;
       	//         }

       	//         if(count1 == count2) return true;

       	//        	// search the remaining windows
       	//         int start = 0, end = i;
       	//         while(end < s2.size()){
       	//        	//remove char at 'start' index and add char at 'end' index
       	//             --count2[s2[start] - 'a'];
       	//             ++count2[s2[end] - 'a'];

       	//             if(count1 == count2) return true;
       	//             end++; start++;
       	//         }
       	//         return false;

       	//     }
       	// };

       	// using map-----> same thing

        bool checkInclusion(string s1, string s2)
        {
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