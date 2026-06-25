class Solution {
public:
    string frequencySort(string s) {

  unordered_map<char,int>mp;
  for(char c:s)
  {
    mp[c]++;
  }
  vector<string>bucket(s.size()+1);
  for(auto x:mp)
  {
    char ch=x.first;
    int freq=x.second;
    bucket[freq]+=string(freq,ch);

  }
  string ans="";
  for(int i=s.size();i>=0;i--)
        ans+=bucket[i];
        return ans;
        
    }

};