class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        
        for( ;left<=right;left++)
        {
            
            if(left<=9)
            {
                ans.push_back(left);

            }
            else
            {
                int temp=left;
                while(temp>0)
                {
                    int rem=temp%10;
                    if(rem == 0 || left % rem != 0)
                        break;
                    if(left%rem==0)
                    {
                        temp=temp/10;
                    }
                }
                if(temp==0)
                {
                    ans.push_back(left);
                }
            }
        }
        return ans;
        
    }
};