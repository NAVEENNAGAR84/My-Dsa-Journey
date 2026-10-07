class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int>ans;
        int n=num.size();
        int i=0;
        int j=n-1;
       int sum=0; 
    
        while(i<j)
        {
             
            sum = num[i]+num[j];
            if(sum==target)
            {
                return {i+1,j+1};
            }
            else if(sum>target)
            {
                j--;
            }
            else
            {
                i++;
            }
            
            

        }
        return {};
        
    }
};