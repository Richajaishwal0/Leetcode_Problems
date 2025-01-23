class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
    unordered_map<int, int> mapp;
    for (int i = 0; i < nums.size(); i++)
        {
            mapp[nums[i]]++;
        }
        for (auto & i: mapp)
        {
            if (i.second==1)
            {
                return i.first;
            }
        }
        return 0;
    }
};