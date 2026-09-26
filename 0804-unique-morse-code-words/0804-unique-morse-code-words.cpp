class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n=words.size();
        if(n==1)
        {
            return n;
        }
        unordered_set<string>st;
vector<string> morse = {
    ".-", "-...", "-.-.", "-..", ".", "..-.",
    "--.", "....", "..", ".---", "-.-", ".-..",
    "--", "-.", "---", ".--.", "--.-", ".-.",
    "...", "-", "..-", "...-", ".--", "-..-",
    "-.--", "--.."
};
 string code="";
for(int j=0;j<n;j++)
{
    string s=words[j];
    string code="";
   int k= s.size();
   int i=0;
    while(i<k)
    {

     code+=morse[s[i]-'a'];
     i++;
    }
    st.insert(code);
    
    
}
      return st.size();

        
    }
};