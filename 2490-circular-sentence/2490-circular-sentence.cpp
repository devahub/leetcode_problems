class Solution
{
    public:
    
    
    /// approach--->  find the space and check its before and after chars
    
        bool isCircularSentence(string str)
        {
            for (int i = 0; i < str.size() - 1; i++)
            {
                if (str[i] != str[i + 2] && str[i + 1] == ' ')
                {
                    return false;
                }
            }
            return str[0]==str[str.size()-1];
        }
};