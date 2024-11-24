class Solution {
public:
    bool isAnagram(string s, string t) {
        bool isana;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if (s==t)
        {
            isana=true;
        }
        else{
            isana=false;
        }
        return isana;
    }
};