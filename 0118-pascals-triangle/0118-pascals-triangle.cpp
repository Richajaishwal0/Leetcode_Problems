class Solution {
public:
    vector<vector<int>> generate(int numRows) {
          long long res=1;
        vector <vector <int>> ans;
        for (int i=1;i<=numRows;i++)
        {
            vector <int> temp;
            temp.push_back(1);
            for (int j=1;j<i;j++)
            {
                res=res*(i-j)/(j);
                temp.push_back(res);
            }
            
            ans.push_back(temp);
            
    
        }
        return ans;
    }
};