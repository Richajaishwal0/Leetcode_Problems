class Solution {
public:
    bool isHappy(int n) {
     unordered_set <int> seen;
     int rem;
     long sum=0;
     while (sum!=1)
     {
        sum=0;
        while (n>0)
        {

            rem=n%10;
            sum+=rem*rem;
            n=n/10;
        }
        n=sum;
        if (seen.count(sum))
        {
            return false;
        }
        else{
            seen.insert(sum);
        }
     }
     return true;
    }
};