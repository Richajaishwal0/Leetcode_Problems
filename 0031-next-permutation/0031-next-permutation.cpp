class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
        for (int i=n-2;i>=0;i--)
        {
            if (nums[i]<nums[i+1])
            {
                ind=i;
                break;
            }
        }
        if (ind==-1)
        {
         reverse(nums.begin(),nums.end());
         return;

        }
        else{
            int min_=INT_MAX;
            int min_ind;
            for (int i=n-1;i>ind;i--)
            {
                if (nums[i]>nums[ind] && nums[i]<min_)
                {
                    min_=min(min_,nums[i]);
                    min_ind=i;
                    // swap(nums[i],nums[ind]);
                    // break;
                    
                }
            }
            swap(nums[ind],nums[min_ind]);

        }
        reverse(nums.begin()+ind+1,nums.end());
    }
};