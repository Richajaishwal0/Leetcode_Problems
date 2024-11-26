class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size=nums.size();
        int st;
        int cs=0;
        int max_=INT_MIN;
        for(int st=0;st<size;st++)
        {    
                cs+=nums[st];
                max_=max(cs,max_);
                if (cs<0)
                {
                    cs=0;
                }

            }
        return max_;
    }
};