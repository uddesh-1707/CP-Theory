// for graph , and visited can be
// avoided in case of trees
vector<int> adj[N + 1];
bool visited[N + 1];
int parent[N + 1];
int depth[N + 1];

void dfs(int node, int par, int d) {
    visited[node] = true;
    parent[node] = par;
    depth[node] = d;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, node, d + 1);
        }
    }
}

// Initial call for one DFS from a chosen root:
// dfs(root, -1, 0);


// After DFS finishes, reconstruct the path from vertex v back to the root
vector<int> path;
for (int cur = v; cur != -1; cur = parent[cur]) {
    path.push_back(cur);
}
reverse(path.begin(), path.end());
// path is now the sequence [root, ..., v]
