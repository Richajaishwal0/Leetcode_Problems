class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int count=0;
        int index=0;
        for (int i=1;i<arr[n-1];i++)
        {
            if (i!=arr[index]){
                count++;
            }
            else{
            index++;
            }
            if (count==k)
            {
                return i;
            }
        }
        return arr[n-1]+k-count;
    }
};