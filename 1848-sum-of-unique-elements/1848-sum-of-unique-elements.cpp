class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map <int, int> mapp;
        int sum=0;
        for (int i=0;i<nums.size();i++)
        {
            mapp[nums[i]]+=1;
        }
        for (auto &i:mapp)
        {
            if (i.second==1)
            {
                sum+=i.first;
            }
        }
        return sum;
    }
};