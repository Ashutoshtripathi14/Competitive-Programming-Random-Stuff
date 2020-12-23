
    void dfs(int s, int e) {
        count[s] = 1;
        for (auto u : adj[s]) {
           if (u == e) continue;
           dfs(u, s);
           count[s] += count[u];
} }
