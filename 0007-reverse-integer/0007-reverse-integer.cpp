class Solution {
public:
    int reverse(int x) {
        int min=INT_MIN;
        int max=INT_MAX;
        if (x >INT_MAX || x<INT_MIN)
                {
                    return 0;
                }
        long  rem;
        long  ans=0;
        while (x!=0)
        {
            rem=x%10;
            ans=ans*10+rem;
            if (ans >INT_MAX || ans<INT_MIN)
                {
                    return 0;
                }
            x=x/10;

        }
        
        return ans;
    }
};