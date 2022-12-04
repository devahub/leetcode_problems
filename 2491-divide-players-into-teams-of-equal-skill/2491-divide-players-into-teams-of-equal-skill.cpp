class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
         sort(skill.begin(), skill.end());
        int s = 0, e = skill.size() - 1;
        long long ans = 0;
		// vector to store sum of the skill of two players.
        vector<long long> v;
        while (s <= e)
        {
            v.push_back(skill[s] + skill[e]); 
            ans += skill[s++] * skill[e--];
        }
		// if every values in sum is not equal, then return -1.
        for (int i = 1; i < v.size(); i++)
            if (v[i - 1] != v[i])
                return -1;
		// since it is not given that size of array is even check for the size.
        if (v.size() == skill.size()/ 2)
            return ans;
        return -1;
    }
};