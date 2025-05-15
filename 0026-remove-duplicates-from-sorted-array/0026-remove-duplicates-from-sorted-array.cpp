class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> expectednums;
        map <int, int> hashmap;
        for (int i=0;i<nums.size();i++)
        {
            hashmap[nums[i]]++;
        }
        for (auto & it: hashmap)

        {
         expectednums.push_back(it.first);
        }
        nums=expectednums;
        return nums.size();
    }
};