class Solution {
public:
   void nCr(int n, int r, vector<int> &vec) {
        long long res = 1;
        vec.push_back(1); // First element is always 1

        for (int i = 1; i < r; i++) {  // Fixed loop range (1 to r-1)
            res = res * (n - i + 1) / i; // Fixed formula
            vec.push_back(res);
        }

        if (r > 0) vec.push_back(1); // Last element is always 1 if row size > 1
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int c = 1; c <= numRows; c++) {  
            vector<int> vec;
            nCr(c - 1, c - 1, vec);  // Fixed function call
            ans.push_back(vec);
        }

        return ans;
    }
};
