class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int max_=INT_MIN;
        for (int i=0;i<n;i++)
        {
            if (nums[i]==1)
            {
                count++;
            }
            else{
                count=0;
            }
            max_=max(max_,count);
        }
        return max_;
    }
};