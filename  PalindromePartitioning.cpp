class Solution {
public:
      bool ispalindrome(string part)
      {
        string s=part;
        reverse(s.begin(),s.end());
        if (part==s)
          return true;

        return false;  
       
        } 
      
      void getpartition(string s,vector<string>&partition,vector<vector<string>>&ans)
       {
        if(s.size()==0)
        {
            ans.push_back(partition);
             return;
        }
        for(int i=0;i<s.size();i++)
        {
            string part=s.substr(0,i+1);
            if(ispalindrome(part))
            {
                partition.push_back(part);
                getpartition(s.substr(i+1),partition,ans);
               partition.pop_back();
            }
            
        }
       }
    vector<vector<string>> partition(string s) {

            vector<vector<string>>ans;
            vector<string>partition;
        getpartition(s,partition,ans);
     
         return ans;
         }
        

    
};