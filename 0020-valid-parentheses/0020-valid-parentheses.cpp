class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        char ch;
        if (s[0]==')') return false;
        if (s.size()%2!=0) return false;
        for (int i=0;i<s.size();i++)
        {
            if (s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else 
            {    if (!st.empty())
                {
                        ch=st.top();
                        if ((ch=='(' && s[i]==')') || (ch=='{' && s[i]=='}') || (ch=='[' && s[i]==']'))
                        {
                            st.pop();
                        }
                        else 
                        {
                            return false;
                        }

                    }
                else{
                    return false;
                    }
            }
        }
        if (st.empty())
        {
            return true;
        }
        return false;
        }
};