class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        reverse(matrix.begin(),matrix.end());
        for (int i=0;i<n;i++)
        {
            for (int  j=0;j<matrix[0].size();j++)
            {
                if (i!=j && i<j)
                {
                    int temp=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=temp;
                }
            }
        }
        
    }
};