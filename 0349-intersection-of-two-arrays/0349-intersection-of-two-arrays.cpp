class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        multiset <int> set1(nums1.begin(),nums1.end());
        multiset <int> set2(nums2.begin(),nums2.end());
        set <int> intersect;
        set_intersection(set1.begin(),set1.end(),set2.begin(),set2.end(),inserter(intersect,intersect.begin()));
        vector <int> vec(intersect.begin(),intersect.end());
        return vec;
    }
};