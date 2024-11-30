class Solution {
public:
    int addDigits(int num) {
       int sum=0;
        do{
            sum=0;
            do
            {
            int rem=num%10;
            sum+=rem;
            num=num/10;
            }while(num!=0);
            num=sum;
        } while (sum>9);
        return sum;
    }
};