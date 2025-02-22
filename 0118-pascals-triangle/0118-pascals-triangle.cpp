class Solution {
public:
   vector<int> nCr(int row ){
    long long res = 1; 
    vector<int> ansr;
      ansr.push_back(1);
    // calculating nCr:
    for (int col = 1; col< row; col++) {
        res = res * (row - col);
        res = res /col;
        ansr.push_back(res);
    }   
    return ansr;
   }
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> ans;
        for (int c=1;c<=n;c++)
        {   vector<int> vec=nCr(c);
            ans.push_back(vec);
        }
        return ans;
    }
};