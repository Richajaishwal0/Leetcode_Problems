class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;
        string a="";
        for (char ch:s)
        {
            if (!st.empty() && st.top()==ch)
            {
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        while (!st.empty())
        {
            a=st.top()+a;
            st.pop();
        }   
        return a;
    }
};