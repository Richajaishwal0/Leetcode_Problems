class Solution {
public:
    
    int climbStairs(int n) {
        // vector <int> dp(n+1,-1);
        if (n==0 || n==1) return 1;
        int prev=1;
        int prev2=1;
        int sum=0;
        for (int i=2;i<=n;i++)
        {
            sum=prev + prev2;
            prev=prev2;
            prev2=sum;
       
        }
         return sum;
    }
};