class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max=LONG_MIN;
        long second=LONG_MIN;
        long third=LONG_MIN;
        int n=nums.size();
        for (int i=0;i<n;i++)
        {
            if (nums[i]==max || nums[i]==second || nums[i]==third)
            {
                continue;
            }
            if (nums[i]>max)
            {
                third=second;
                second=max;
                max=nums[i];
            }
            else if (nums[i]>second)
            {
                third=second;
                second=nums[i];
            }
            else if (nums[i]>third){
                third=nums[i];
            }
        }
        if (third==LONG_MIN)
        {
            return max;
        }
        return third;
    }
};