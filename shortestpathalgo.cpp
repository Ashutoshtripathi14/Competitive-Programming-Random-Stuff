//bellmanford
vector <int> v [2000 + 10];
int dis [1000 + 10];

for(int i = 0; i < m + 2; i++){

    v[i].clear();
    dis[i] = 2e9;
}

for(int i = 0; i < m; i++){

    scanf("%d%d%d", &from , &next , &weight);

    v[i].push_back(from);
    v[i].push_back(next);
    v[i].push_back(weight);
}

dis[0] = 0;
for(int i = 0; i < n - 1; i++){
    int j = 0;
    while(v[j].size() != 0){

        if(dis[ v[j][0]  ] + v[j][2] < dis[ v[j][1] ] ){
            dis[ v[j][1] ] = dis[ v[j][0]  ] + v[j][2];
        }
        j++;
    }
}
//djikstra
#define SIZE 100000 + 1

vector < pair < int , int > > v [SIZE];   // each vertex has all the connected vertices with the edges weights
int dist [SIZE];
bool vis [SIZE];

void dijkstra(){
                                                // set the vertices distances as infinity
    memset(vis, false , sizeof vis);            // set all vertex as unvisited
    dist[1] = 0;
    multiset < pair < int , int > > s;          // multiset do the job as a min-priority queue

    s.insert({0 , 1});                          // insert the source node with distance = 0

    while(!s.empty()){

        pair <int , int> p = *s.begin();        // pop the vertex with the minimum distance
        s.erase(s.begin());

        int x = p.s; int wei = p.f;
        if( vis[x] ) continue;                  // check if the popped vertex is visited before
         vis[x] = true;

        for(int i = 0; i < v[x].size(); i++){
            int e = v[x][i].f; int w = v[x][i].s;
            if(dist[x] + w < dist[e]  ){            // check if the next vertex distance could be minimized
                dist[e] = dist[x] + w;
                s.insert({dist[e],  e} );           // insert the next vertex with the updated distance
            }
        }
    }
}
//floyd'swarshall
for(int k = 1; k <= n; k++){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            dist[i][j] = min( dist[i][j], dist[i][k] + dist[k][j] );
        }
    }
}
