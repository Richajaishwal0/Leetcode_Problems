class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int copy=x;
        if (x<0) return false;
        if (x==0) return true;
        while (x!=0)
        {
            int rem=x%10;
            rev=rev * 10 + rem;
            x=x/10;
        }
        return (copy==rev);
    }
};