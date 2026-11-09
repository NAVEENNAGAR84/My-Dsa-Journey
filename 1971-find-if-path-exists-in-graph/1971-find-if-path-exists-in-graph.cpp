class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>e(n);
        for(auto neigh:edges)
        {
            int s=neigh[0];
            int d=neigh[1];
            e[s].push_back(d);
            e[d].push_back(s);

        }
        vector<int>vis(n,0);
        queue<int>q;
        q.push(source);
        vis[source]=1;
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            if(x==destination)
            {
                return true;
            }
            for(auto node:e[x])
            {
                if(vis[node]==0)
                { 
                    vis[node]=1;
                q.push(node);
                }
            }
        }
        return false;
        
    }
};