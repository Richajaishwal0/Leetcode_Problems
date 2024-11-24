class Solution {
public:
    char findTheDifference(string s, string t) {
        multiset <char> set1(s.begin(),s.end());
        multiset <char> set2(t.begin(),t.end());
        char ch;
        set <char> diffe;
        set_difference(set2.begin(), set2.end(), set1.begin(), set1.end(), inserter(diffe,diffe.begin()));
   
    return *diffe.begin();
    }
};