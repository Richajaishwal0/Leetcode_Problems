class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // // sort(nums.begin(),nums.begin());
        // for (int i=0;i<n;i++)
        // {
        //     if (i!=nums[i])
        //     {
        //         num=i;
        //         // break;
        //     }
        // }
        // return num;
        int summ=n*(n+1)/2;
        int sum=accumulate(nums.begin(),nums.end(),0);
        int num=summ-sum;
    
        return num;

    }
};