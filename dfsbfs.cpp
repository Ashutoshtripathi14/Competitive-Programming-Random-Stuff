//dfs
DFS-recursive(G, s):
    mark s as visited
    for all neighbours w of s in Graph G:
        if w is not visited:
            DFS-recursive(G, w)
//bfs
vector<ll>vis(n,0);
queue<ll> q;
for(ll i=0;i<n;i++) {
    if(vis[i]==0){
        q.push(i);
        vis[i] = 1;
        while (!q.empty()) {
            ll a;
            a = q.front();
            q.pop();
            for (ll j = 0; j < edge[a].size(); j++) {
                if(vis[edge[a][j]]==0) {
                    q.push(edge[a][j]);
                    vis[edge[a][j]] = 1;
                }
            }
        }
    }
}
//numberofconnectedcomponentsusingdfs
    vector <int> adj[10];
    bool visited[10];

    void dfs(int s) {
        visited[s] = true;
        for(int i = 0;i < adj[s].size();++i)    {
         if(visited[adj[s][i]] == false)
             dfs(adj[s][i]);
        }
    }

    void initialize() {
        for(int i = 0;i < 10;++i)
         visited[i] = false;
    }

    int main() {
        int nodes, edges, x, y, connectedComponents = 0;
        cin >> nodes;                       //Number of nodes
        cin >> edges;                       //Number of edges
        for(int i = 0;i < edges;++i) {
         cin >> x >> y;
     //Undirected Graph
         adj[x].push_back(y);                   //Edge from vertex x to vertex y
         adj[y].push_back(x);                   //Edge from vertex y to vertex x
        }

        initialize();                           //Initialize all nodes as not visited

        for(int i = 1;i <= nodes;++i) {
         if(visited[i] == false)     {
             dfs(i);
             connectedComponents++;
         }
        }
        cout << "Number of connected components: " << connectedComponents << endl;
        return 0;
    }
