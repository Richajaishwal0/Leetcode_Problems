class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int ans=0;
        int temp=x;
        while (x!=0)
        {
            int rem=x%10;
            if (ans<INT_MIN/10 || ans>INT_MAX/10)
            {
                return false;
            }
            ans=ans*10+rem;
            x=x/10;
        }
        if (temp==ans)
        {
            return true;
        }
        return false;
    }
};