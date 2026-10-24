class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;

        struct cmp {
            bool operator()(const pair<string, int>& a, const pair<string, int>& b) {
                if (a.second != b.second)
                    return a.second > b.second;

                return a.first < b.first;
            }
        } ;
        priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;
        int n = words.size();
        for (auto x : words) {
            mp[x]++;
        }
        for (auto x : mp) {
            pair<string, int> curr = x;
            if (pq.size() < k) {
                pq.push(curr);
                continue;
            }

            if (curr.second < pq.top().second || (curr.second==pq.top().second && curr.first>pq.top().first))
                  continue;

            pq.pop();
            pq.push(curr);
        }
        vector<string> ans;
        while (!pq.empty()) {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};