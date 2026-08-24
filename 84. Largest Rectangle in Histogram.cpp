class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        stack<int>s;
        int maxarea=0;
        for(int i=n-1;i>=0;i--)
        {
            while(s.size()>0 && h[s.top()]>=h[i])
            {
                s.pop();
            }
            right[i]=s.empty()? n :s.top();
            s.push(i);
        }
        while(s.size()>0)
        {
            s.pop();
        }
        for(int j=0;j<n;j++)
        {
            while(s.size()>0 && h[s.top()]>=h[j])
            {
                s.pop();

            }
            left[j]=s.empty()?-1: s.top();
            s.push(j);
        }
        for(int k=0;k<n;k++)
        {
           int  width=right[k]-left[k]-1;
            int currentarea=h[k]*width;
            maxarea=max(maxarea,currentarea);

        }
        return maxarea;

        

        
    }
};