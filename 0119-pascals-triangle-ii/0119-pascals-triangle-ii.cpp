class Solution {
public:
    long long  pascal(int n, int c )
    {
        long long  res=1;
        // vector<int> rowvec;
        // rowvec.push_back(1);
        for (int i=0;i<c;i++)
        {
            res*=(n-i);
            res/=(i+1);
           
        }
        return res;

    }
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        vector <int> ans;
        // ans.push_back(1);
        for (int c=0;c<=n;c++)
        {
            ans.push_back(pascal(n,c));
        }
        return ans;
    }
};