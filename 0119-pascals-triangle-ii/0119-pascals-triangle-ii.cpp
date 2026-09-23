class Solution {
public:
    vector<int> getRow(int n) {
        vector<int>row(n+1,0);
        row[0]=1;
        for(int i=1;i<=n;i++)
        {
        for(int j=i;j>=1;j--)
        {
            row[j]=row[j]+row[j-1];
        }
        }
        return row;
        
       
    }
};