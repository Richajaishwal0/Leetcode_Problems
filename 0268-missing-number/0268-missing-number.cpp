class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int num;
        sort(nums.begin(),nums.end());
        // if ()
        for (int i=0;i<n;i++)
        {
            if (i!=nums[i])
            {
                return i;
            }
        }
        return n;
        // int summ=n*(n+1)/2;
        // int sum=accumulate(nums.begin(),nums.end(),0);
        // int num=summ-sum

    }
};