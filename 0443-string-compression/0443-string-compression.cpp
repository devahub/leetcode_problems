class Solution
{
    public:
        int compress(vector<char> &chars)
        {
            int n = chars.size();
            int i = 0;
            int j = 0;

            
            while (j < n)
            {       
                int c = 0;                  
                char curchar = chars[j];
                while (j < n && curchar == chars[j])
                {       // while loop used to count the freq of each element
                    c++;
                    j++;
                }

                chars[i] = curchar;
                i++;                // if present once print that char only
                
                if (c > 1)
                {
                    string count = to_string(c);

                    for (auto p: count)
                    {
                        chars[i] = p;
                        i++;
                    }
                }
            }
            return i;
        }
};