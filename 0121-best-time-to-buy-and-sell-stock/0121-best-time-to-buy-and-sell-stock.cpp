class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int bestbuy=prices[0];
        int mp=0;
        for (int i=1;i<size;i++)
        {
            if (prices[i]>bestbuy)
            {
                mp=max(mp,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return mp;
    }
    
};