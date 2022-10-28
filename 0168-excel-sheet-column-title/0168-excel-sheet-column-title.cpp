class Solution
{
    public:
        string convertToTitle(int col)
        {
            map<int, char> mp;
            string ans;

            mp[1] = 'A';
            mp[2] = 'B';
            mp[3] = 'C';
            mp[4] = 'D';
            mp[5] = 'E';
            mp[6] = 'F';
            mp[7] = 'G';
            mp[8] = 'H';
            mp[9] = 'I';
            mp[10] = 'J';
            mp[11] = 'K';
            mp[12] = 'L';
            mp[13] = 'M';
            mp[14] = 'N';
            mp[15] = 'O';
            mp[16] = 'P';
            mp[17] = 'Q';
            mp[18] = 'R';
            mp[19] = 'S';
            mp[20] = 'T';
            mp[21] = 'U';
            mp[22] = 'V';
            mp[23] = 'W';
            mp[24] = 'X';
            mp[25] = 'Y';
            mp[26] = 'Z';

           
            if (col > 26)
            {
                while (col > 26)
                {
                    int x = col % 26;
                    if (x == 0)
                    {
                        x = 26;
                        col--;
                    }
                    ans = mp[x] + ans;
                    col = col / 26;
                }
            }

             if (col <= 26)
            {
                ans = mp[col] + ans;
            }

            return ans;
        }
};