class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> Stack;
        int n=s.size();
        for (char ch: s)
        {
            if (!Stack.empty() && Stack.top()==ch)
            {
                Stack.pop();
            }
            else{
            Stack.push(ch);
            }
        }
        string a="";
        while (!Stack.empty())
        {
            a=Stack.top()+a;
            Stack.pop();
        }  
        return a;
    }
};