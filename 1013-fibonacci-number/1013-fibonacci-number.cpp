class Solution {
public:
    int fib(int n) {
        if (n==1 || n==2)
        {
            return 1;
        }
        if (n==0)
        {
            return 0;
        }
        int ans=fib(n-2)+fib(n-1);
        return ans;
    }
};