class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans1=0;
        int ans2=0;
       
        for (int i=0;i<nums1.size();i++)
        {
                ans1^=nums1[i];
        }
         for (int k=0;k<nums2.size();k++)
         {
                 ans2^=nums2[k];
         }
          int result=0;
          if (nums2.size()%2!=0)
         {
            result^=ans1;
         }
         if (nums1.size()%2!=0)
         {
            result^=ans2;
         }
        
         return result;
    }
};