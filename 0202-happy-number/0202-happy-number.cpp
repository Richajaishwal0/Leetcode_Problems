class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        bool ishappy;
        unordered_set <int> seen;
        do
        {  
            sum=0;
            while (n>0)
            {
                int rem=n%10;
                sum+=rem*rem;
                n=n/10;
            }
             n=sum;

        if(seen.count(n)) //returns 1 if n is already in the set.
        {
            ishappy=false;
            break;
        }
        else  {
            seen.insert(n);
            ishappy=true;
        }
        }while(!(sum==1 ));

        return ishappy;
    }
};