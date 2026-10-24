class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        int n=words.size();
        for(auto x:words)
        {
            mp[x]++; 
        }
        vector<vector<string>>bucket(n+1);
        for(auto x:mp)
        {
            bucket[x.second].push_back(x.first);
        }
        vector<string>ans;
        for(int i=n;i>=0;i--)
        {
            sort(bucket[i].begin(),bucket[i].end());
             for(auto x:bucket[i])
            {
                ans.push_back(x);
            if(ans.size()==k)
              return ans;
            }

        }
        
        return ans;
        
    }
};