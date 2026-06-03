class Solution {
public:
    bool isfreqsame(vector<int>&count1,vector<int> &count2)

    {
        for (int i = 0; i < 26; i++) {
            if (count1[i] != count2[i])
                return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {

        vector<int> count1(26, 0);
        int n = s1.size();
        int m = s2.size();
        if (n > m)
          return 0;
        for (int i = 0; i < n; i++) {
            count1[s1[i] - 'a']++;
        }
        int windsize = n;
        for (int i = 0; i < m; i++) {
            vector<int> count2(26, 0);
            int windex = 0, indx = i;
            while (windex < windsize && indx < s2.size()) {
                count2[s2[indx] - 'a']++;
                windex++;
                indx++;
            }
            if (isfreqsame(count1, count2) ){

                return 1;} 
        
         
    }
    return 0;
    }

};