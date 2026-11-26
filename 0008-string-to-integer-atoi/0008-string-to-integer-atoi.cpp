class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int sign = 1;
        int i=0;
        while(i<n && s[i]==' ')
        {
            i++;
        }
        if(i<n && s[i]=='+')
        {
            sign=1;
            i++;
        }
        else if(i<n && s[i]=='-')
        {
            sign= -1;
            i++;
        }
         long long ans=0;
        while(i<n && s[i]>='0' && s[i]<='9')
        {
            int digit = s[i]-'0';
            ans=ans*10+digit;
            if(sign*ans>INT_MAX)
            {
                return INT_MAX;
            }
            if(sign*ans<INT_MIN)
            {
             return INT_MIN;
            }
            i++;
        }
        return int( sign*ans);
       
    }
};