class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> temp(nums.size(),0);
        int post=0;
        int neg=1;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]>0)
            {
                temp[post]=nums[i];
                post+=2;
            }
            else
            {
                temp[neg]=nums[i];
                neg+=2;
            }
        }
        for (int i=0;i<temp.size();i++)
        {
            nums[i]=temp[i];
        }
        return nums;
    }
};