class Solution {
public:
    int maxArea(vector<int>& height) {
        // int maxarea=0;
        // int n=height.size();
        // int h,w;
        // int area;
        // for (int i=0;i<n;i++)
        // {
        //     for (int j=i+1;j<n;j++)
        //     {
        //         w=j-i;
        //         h=min(height[i],height[j]);
        //         area=w*h;
        //         maxarea=max(maxarea,area);
        //     }

        // }
        // return maxarea; // time complexity is O(n^2)
        //Again
        int h,w,area;
        int max_area=0;
         int st=0;
         int n=height.size();
         int end=n-1;
         while(st<end)
         {
            h=min(height[st],height[end]);
            w=end-st;
            area=w*h;
            max_area=max(max_area,area);
            if (height[end]>height[st])
            {
            st++;
            }
            else 
            {
            end--;
            }
            
         }
         return max_area;
    }
};