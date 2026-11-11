class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans=0;
        int arr[26]={0};
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']=i;
        }
        for(int j=0;j<t.size();j++)
        {
           
               ans=ans+abs(j-arr[t[j]-'a']);
            
        }
        return ans;
        
        
    }
};