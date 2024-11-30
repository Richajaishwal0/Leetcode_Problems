class Solution {
public:
    int findMin(vector<int>& arr) {
        int st=0;
        int end=arr.size()-1;
        int mid;
        while (st<end)
        {
            int mid=st+(end-st)/2;
            if(arr[mid]>arr[end])
            {
                st=mid+1;
            }
            else {
                end=mid;
                
            }   
    }
    return arr[st];
    }
};