class Solution {
public:
    bool isValid(string s) {
        string a=s;
        stack <char > stack;
        int n=s.size();
        char ch;
        bool isv;
        if (n%2!=0) return false;
        for (int i=0;i<n;i++)
        {
            if (a[i]=='('|| a[i]=='{' || a[i]=='[')
            {
                stack.push(a[i]);
            }
            else{
                if(!stack.empty())
                {   ch=stack.top();
                    stack.pop(); 
                    if (a[i]==')' && ch=='(')
                    {
                        isv=true;
                    }
                    else if (a[i]=='}' && ch=='{')
                    {
                        isv=true;
                    }
                    else if (a[i]==']' && ch=='[')
                    {
                        isv=true;
                    }
                     else
                {
                    isv=false;
                    break;    
                }
                    
                }
                else
                {
                    isv=false;
                    break;    
                }
            }
        }
        if(!stack.empty())
        {
            isv=false;
        }
        return isv;
    }
};