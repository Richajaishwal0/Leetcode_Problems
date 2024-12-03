class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=spaces.size();
        int m=s.size();
        string a="";
        int index=0;
        for (int i=0;i<m;i++)
        {
           if (index < n && spaces[index]==i)
           {
            a+=' ';
            index++;
           }
           a+=s[i];
        }
        return a;
    }
};