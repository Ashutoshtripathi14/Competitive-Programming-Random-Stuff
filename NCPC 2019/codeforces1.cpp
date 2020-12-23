//my shoulder hurts T_T T_T Hope this passes ^_^
//Tuturu~
//tried something didn't work
//idk man let's see
//:((
#include<stdio.h>
#include<ctime>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <string>
#include <queue>
#include <deque>
#include <tuple>
#include <fstream>

#define fr first
#define sc second
#define pb push_back
#define pii pair<ll, ll>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<ll, ll> pll;
const ll MOD = 1e9 + 7;
const ll INF = 1e9 + 1;
const ll NINF = -1 * INF;
ll V;
vector<ll> arr[300001];
bool vis[300001];

bool isittrue(pll a,pll b){
  ll x1,x2,y1,y2;
  x1=a.first;
  x2=b.first;
  y1=a.second;
  y2=b.second;
  if(x1<=x2){
    if(y1<=x2){
      return false;
    }else{
      return true;
    }
  }else{
    if(y2<=x1){
      return false;
    }else{
      return true;
    }
  }
}
void DFS (ll n, ll vert, ll start, ll &count)
{
    vis[vert] = true;
    if (n == 0) {
        vis[vert] = false;
        if (arr[vert][start])
        {
            count++;
            return;
        } else
            return;
    }
    for (ll i = 0; i < V; i++)
        if (!vis[i] && arr[vert][i])
            DFS(n-1, i, start, count);
    vis[vert] = false;
}
ll countCycles( ll n)
{
    memset(vis, 0, sizeof(vis));
    ll count = 0;
    for (ll i = 0; i < V - (n - 1); i++) {
        DFS(n-1, i, i, count);
        vis[i] = true;
    }
    return count/2;
}


//ll maxa=0;
//ll mini=INF;

void solve(){
  for (auto& v : arr) {
     arr.clear();
  }
  cin>>V;
  ll k;
  cin>>k;
  pll temparr[V];
  for(ll i=0;i<V;i++){
    ll a,b;
    cin>>a>>b;
    temparr[i]=make_pair(a,b);
  }
  for(ll i=0;i<V;i++){
    for(ll j=0;j<V;j++){
      if(isittrue(temparr[i],temparr[j])){
        arr[i].pb(j);
        arr[j].pb(i);
      }
    }
  }
  cout<<countCycles(k)<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
      solve();
    }
}
