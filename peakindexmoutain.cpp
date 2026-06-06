class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int l = 1;
        int h = n - 2;
        while(l<=h)
        {
            int mid =l+(h-l)/2;
            if(arr[mid-1]<arr[mid]&& arr[mid]>arr[mid+1])
            {
                 return mid;
            }
         if(arr[mid-1]<arr[mid])
               {
                 l=mid+1;}
                 else
                  {h=mid-1;}
        }
      
       return -1;

    }
     
    
};