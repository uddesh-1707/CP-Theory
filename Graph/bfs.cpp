const ll N = 1e5+1;
vector<ll> adj[N];
bool vis[N];
ll dist[N];

void bfs(ll src){
    queue<ll> q;
    q.push(src);
    vis[src] = true;
    dist[src] = 0;
    while (!q.empty())
    {
        ll u = q.front();
        q.pop();
        for(ll v : adj[u]){
            if(!vis[v]){
                vis[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    
}
