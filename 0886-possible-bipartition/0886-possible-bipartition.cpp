class Solution {
public:
  bool res= true;
   void dfs(vector<vector<int>>&adj,vector<int>&color,int node,int c)
   {
    color[node]=c;
    for(auto neigh:adj[node])
    {
        if(color[neigh]!=-1 && color[neigh]==c)
        {
            res=false;
        }
        else if(color[neigh]==-1)
        {
            dfs(adj,color,neigh,1-c);
        }
    }
   }
    bool possibleBipartition(int n, vector<vector<int>>& dis) {
        vector<vector<int>>adj(n+1);
        for(auto neigh:dis)
        {
            int u=neigh[0];
            int v=neigh[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>color(n+1,-1);
        for(int i=1;i<=n;i++)
        {
            if(color[i]==-1)
            {
                dfs(adj,color,i,0);
            }
            if(!res)
              return res;
        }
        return res;
        
    }
};