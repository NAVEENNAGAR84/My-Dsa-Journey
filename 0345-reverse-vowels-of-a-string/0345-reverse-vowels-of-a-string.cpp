class Solution {
public:
  bool isvowels(char ch)
  {
    bool a= ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U';
    return a;
  }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            if(!isvowels(s[i]))
            {
                i++;
            }
            else if(!isvowels(s[j]))
            {
                j--;
            }
            else
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }

            
        }
        return s;
    }
};