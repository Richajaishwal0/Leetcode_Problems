class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        // vector <int> expectednums;
        // map <int, int> hashmap;
        // for (int i=0;i<nums.size();i++)
        // {
        //     hashmap[nums[i]]++;
        // }
        // for (auto & it: hashmap)

        // {
        //  expectednums.push_back(it.first);
        // }
        // nums=expectednums;
        // return nums.size(); NOt the good approach either can use set or two pointer approach too

        // Using two pointer Approach
        int i=0;
        for (int j=1;j<arr.size();j++)
        {
            if (arr[i]!=arr[j])
            {
                i++;
                arr[i]=arr[j];
            }
        }
        return i+1;
    }
};