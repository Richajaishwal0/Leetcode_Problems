class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> char_count;
        if (s.size()!=t.size()) return false;
        for (int i=0;i<s.size();i++)
        {
            char_count[s[i]]++;
            char_count[t[i]]--;
        }
        for (auto &it: char_count)
        {
            if (it.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};