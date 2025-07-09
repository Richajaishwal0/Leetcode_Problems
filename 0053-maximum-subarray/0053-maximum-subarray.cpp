class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int  max_=INT_MIN;
        int curr=0;
        for (int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            if (curr>max_)
            {
                max_=curr;
            }
            if (curr<0)
            {
                curr=0;
            }
        }
        return max_;
    }
};