const ll N = 1e5+1;
vector<ll> adj[N];
bool vis[N];

void dfs(ll u){
    vis[u] = true;
    for(ll v : adj[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
