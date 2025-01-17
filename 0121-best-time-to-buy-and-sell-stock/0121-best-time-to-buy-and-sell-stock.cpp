class Solution {
public:
    int maxProfit(vector<int>& prices) {
           int min_=prices[0];
        int max_=INT_MIN;
        for (int i=0;i<prices.size();i++)
        {
            if (prices[i]<min_)
            {
                min_=prices[i];
            }
            max_=max(max_,prices[i]-min_);

        }
        return max_;
    }
};