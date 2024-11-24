class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size=nums2.size();
        for (int i=0;i<size;i++)
        {
        int po=m+i;
        nums1[po]=nums2[i];
            
        }
        sort(nums1.begin(),nums1.end());
    }
};