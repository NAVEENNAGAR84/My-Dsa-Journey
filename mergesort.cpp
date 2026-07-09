class Solution {
public:
  void merge(vector<int>&num,int start,int mid,int end)
  {
    vector<int>temp;
    int i=start;
    int j=mid+1;

    while(i<=mid && j<=end)
    {
        if(num[i]<num[j])
        {
        temp.push_back(num[i]);
        i++;
        }
        else
        {
            temp.push_back(num[j]);
            j++;
        }
    }
        while(i<=mid)
        {
            temp.push_back(num[i]);
        i++;

        }
        while(j<=end)
        {
            temp.push_back(num[j]);
            j++;
        }
        for(int indx=0;indx<temp.size();indx++)
        {
            num[indx+start]=temp[indx];
        }
    

  }
     void mergesort(vector<int>&num,int start,int end)
     {
        if(start<end)
        {
            int mid =start+(end-start)/2;

            mergesort(num,start,mid);
            mergesort(num,mid+1,end);
            merge(num,start,mid,end);
        }
     }
    vector<int> sortArray(vector<int>& num) {
        int n=num.size();
        mergesort(num,0,n-1);
        return num;
        

    }
    
}; 