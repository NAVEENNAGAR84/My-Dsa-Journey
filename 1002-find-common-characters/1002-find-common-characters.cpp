class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int>mp;
        vector<string>ans;
        for(char c:words[0])
        {
            mp[c]++;
        }
        for(int i=1;i<words.size();i++)
        {
                unordered_map<char,int>temp;
            for(char ch:words[i])
            {
                temp[ch]++;
            }
            for(auto &p:mp)
            {
                char ch=p.first;
                mp[ch]=min(mp[ch],temp[ch]);
            }
            
            
          
        
            

        }
        for(auto &p:mp)
            {
                for(int i=0;i<p.second;i++)
                {
                    ans.push_back(string(1,p.first));
                }
            }

          return ans;

        
    }
};