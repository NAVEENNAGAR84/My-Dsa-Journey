class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int n=num.size();
        int i=0;
        int carry=0;
        while(i<n || k>0|| carry)
        {
            int sum=carry;
            if(i<n)
            {
                sum+=num[n-i-1];
            }
            if(k>0)
            {
                int rem=k%10;
                k=k/10;
                sum+=rem;
            }
            int digit=sum%10;
            ans.push_back(digit);
            carry=sum/10;
            i++;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};