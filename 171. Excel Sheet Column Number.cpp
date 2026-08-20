class Solution {
public:
    int titleToNumber(string s) {
        int n=s.size();
        int ans=0;
        int res=0;
        
       for(int i=0;i<n;i++)
       {
        int value=s[i]-'A'+1;
        ans=ans*26+value;
       }
       return ans;
       
     
        
    }
};