class Solution {
public:
    string removeDuplicates(string s) {
        string a=s;
        int n=a.size();
        int i=0;
       while(i<n-1)
        {
            if(a[i]==a[i+1])
            {   a.erase(i+1,1);
                a.erase(i,1);
                n=a.size();
                i=0;
            }
            else{
                i++;
            }
            
        }
        return a;
    }
};