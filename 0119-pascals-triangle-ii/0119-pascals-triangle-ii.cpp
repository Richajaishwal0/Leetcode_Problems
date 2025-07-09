class Solution {
public:
    // long long  pascal(int n, int c )
    // {
    //     long long  res=1;
    //     {
    //         res*=(n-i);
    //         res/=(i+1);
           
    //     }
    //     return res;

    // }
    // vector<int> getRow(int rowIndex) {
    //     int n=rowIndex;
    //     vector <int> ans;
    //     for (int c=0;c<=n;c++)
    //     {
    //         ans.push_back(pascal(n,c));
    //     }
    //     return ans;

    //  we can obtimised this code by reducing time complexity to linear


    vector<int> getRow(int rowIndex) {
        long long  res=1;
        vector <int> ans;
        ans.push_back(res);
        for (int i=0;i<rowIndex;i++)
        {
            res= res*(rowIndex-i)/(i+1);
            ans.push_back(res);
        }
        return ans;
    }
};