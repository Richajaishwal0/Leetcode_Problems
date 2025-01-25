class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int,int> mapp;
        int count=nums.size()/3;
        vector <int> vec;
        for (int i=0;i<nums.size();i++)
        {
            mapp[nums[i]]+=1;
        }
        for (auto & it: mapp)
        {
            if (it.second>count)
            {
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};