class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int j;
        for(j=n-1;j>=0;j--)
        {
            if(num[j]%2!=0)
                 break;
            
        }

        return num.substr(0,j+1);

        
    }
};