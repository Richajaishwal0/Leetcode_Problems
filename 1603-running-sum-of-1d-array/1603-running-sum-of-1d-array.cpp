class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector <int> vec;
        int a=0;
        for (int i=0;i<n;i++)
        {
            a+=nums[i];
            vec.push_back(a);
        }
        return vec;
    }
};