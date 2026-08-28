class Solution {
public:
    string shortestPalindrome(string s) {
        string temp=s;
        int n=s.size();
        string rev=s;
        reverse(rev.begin(),rev.end());
        s+='$';
        s+=rev;
        int m=s.size();
        vector<int>lps(m,0);
        int pre=0,suf=1;
        while(suf<m)
        {
            if(s[suf]==s[pre])
            {
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else
            {
                if(pre==0)
                {
                    lps[suf]=0;
                    suf++;
                }
                else
                {
                    pre=lps[pre-1];
                }
            }
        }
        int a=n-lps[m-1];
        string s1=temp.substr(n-a);
        reverse(s1.begin(),s1.end());
        return s1+temp;


        
    }
};