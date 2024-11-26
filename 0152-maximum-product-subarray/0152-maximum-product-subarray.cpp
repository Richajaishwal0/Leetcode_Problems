class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_=INT_MIN;
        int i;
        int cs=1;
        int pre=1,suf=1;
        int size=nums.size();
        for (int i=0;i<size;i++)
        {   
            if (pre==0)
            {
                pre=1;
            }
            if (suf==0)
            {
                suf=1;
            }
            pre*=nums[i];
            suf*=nums[size-i-1];
            max_=max(max_,max(pre,suf));
        }
        return max_;

    }
};