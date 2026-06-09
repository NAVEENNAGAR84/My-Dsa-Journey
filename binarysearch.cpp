class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int l = 1;
        int h = n -2;
        if(n==1)
          return nums[0];
        if(nums[0]!=nums[l])
          return nums[0];
        if(nums[n-1]!=nums[h])
          return nums[n-1];
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
                return nums[mid];
            if (mid % 2 == 0) {
                if (nums[mid] == nums[mid - 1]) {
                    h = mid -1;

                } else {
                    l = mid +1;
                }

            } else {
                if(nums[mid]==nums[mid-1])
                  {
                    l=mid+1;
                  }
                  else
                  {
                    h=mid-1;
                  }
            }
        }
         return -1;
    }
};