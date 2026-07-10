class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int n=s.size();
        vector<int>freq(26,0);
        int maxfreq=0;
        int ans=0;
        while(j<n)
        {
            freq[s[j]-'A']++;
            maxfreq=max(maxfreq,freq[s[j]-'A']);
            while((j-i+1)-maxfreq>k)
            {
                freq[s[i]-'A']--;
                i++;
            }

            ans=max(ans,j-i+1);


        }
        return ans;
        
    }
};