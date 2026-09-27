class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int ans=0;
        for(auto x:chars)
        {
            mp[x]++;
        }
        for(auto x:words)
        {
            unordered_map<char,int>temp=mp;
            bool res=true;
            string s=x;
            int i=0;
            int n=s.size();
            while(i<n)
            {
                if(temp.find(s[i])!=temp.end())
                {
                    if(temp[s[i]]>0)
                    {
                        temp[s[i]]--;
                        i++;
                    }
                    else
                    {
                        res=false;
                        break;
                    }
                }
                else
                {
                    res=false;
                    break;
                }
                

            }
            if(res)

            ans+=n;
        }
        return ans;

        
    }
};