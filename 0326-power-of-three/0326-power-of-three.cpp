class Solution {
public:
    bool isPowerOfThree(int n) {
         long long  pow=3;
        if (n==1) return true;
        for (int i=0;i<=n/3;i++)
        {
            
            if (pow==n)
            {
                return true;
            }
            else if (pow>n)
            {
                return false;
            }
            pow=pow*3;
        }
        return false;
    }
};