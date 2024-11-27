class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector <int> output(n,1);
        for (int i=1;i<n;i++)
        {
         output[i]=output[i-1]*nums[i-1];   
        }
        int suffix=1;
        for (int j=n-2;j>=0;j--)
        {
            suffix*=nums[j+1];
            output[j]*=suffix;
        }
        return output;
       
    }
};