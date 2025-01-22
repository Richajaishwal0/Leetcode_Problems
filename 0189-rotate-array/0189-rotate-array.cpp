class Solution {
public:
     void reverse(vector<int>&nums,int st, int end)
        {   
        while (st<=end)
        {
            swap(nums[st],nums[end]);
            st++;
            end--;
        }
        }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if (n==0) return ;
         k = k % n;
         if (k>n) return;
         
        // vector <int> temp(n);
        // if (n==0) return ;
        // k=k%n;
        // if (k>n){
        //     return;
        // }
        // for (int i=n-k; i<n;i++)
        // {
        //     temp[i-(n-k)]=nums[i];
        // }
        // for (int i=n-1-k;i>=0;i--)
        // {
        //     nums[i+k]=nums[i];
        // }
        // for (int i=0;i<k;i++)
        // {
        //     nums[i]=temp[i];
        // }
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);

    }
   
};