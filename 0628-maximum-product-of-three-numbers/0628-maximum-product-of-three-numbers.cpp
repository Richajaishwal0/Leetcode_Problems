class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int pro=1;
        int msx,pro1;
        for (int i=n-1;i>=n-3;i--)
        {
            pro*=nums[i];
        }
        pro1=nums[0]*nums[1]*nums[n-1];
        msx=max(pro,pro1);
        return msx;
    }
};