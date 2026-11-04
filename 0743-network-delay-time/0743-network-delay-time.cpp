class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    
    vector<vector<pair<int,int>>>adj(n+1);
    for(auto x:times)
    {
        int u=x[0];
        int v=x[1];
        int w=x[2];
        adj[u].push_back({v,w});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>dis(n+1,INT_MAX);
    dis[k]=0;
    pq.push({0,k});
    while(!pq.empty())
    {
       auto x=pq.top();
       pq.pop();
       int d=x.first;
       int node=x.second;
       if(d>dis[node])
        continue;
      for(auto neigh:adj[node])
      {
        int newneigh=neigh.first;
        int w=neigh.second;
        if(d+w<dis[newneigh])
        {
            dis[newneigh]=d+w;
            pq.push({d+w,newneigh});
        }
      }  
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(dis[i]==INT_MAX)
          return -1;
      ans=max(ans,dis[i]);
    }
    return ans;
        
    }
};