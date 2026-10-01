class Solution {
public:
    bool detectCapitalUse(string word) {
          int n=word.size();
         int uppercase=0;
         for (auto x : word) {
            if (x >= 65 && x <= 90) {
                uppercase++;
            }
        }
        if(uppercase==0 ||uppercase==n)
               return true;
         if(word[0]>=65 && word[0]<=90 && uppercase==1)  
               return true;
         
       return false;
    }
};