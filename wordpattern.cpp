class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string>word;
        string temp;
        for(char c:s)
        {
            if(c==' ')
            {
                word.push_back(temp);
                 temp="";
            }
            else
            {
                temp+=c;
            }
        }
         word.push_back(temp);
         if(p.size()!=word.size())
           return false;
        unordered_map<char,string>mp;
        unordered_map<string,char> rev;

        for(int i=0;i<p.size();i++)
        {
            if(mp.count(p[i]))
             {
                if(mp[p[i]]!=word[i])
               return false;
             }
            else
            {
                mp[p[i]]=word[i];
            }
            if(rev.count(word[i]))

            {
                if(rev[word[i]]!=p[i])
                  return false;


            }
            else
            {
               rev[word[i]]=p[i];
            }

        }
        return true;
        
        
    }
};