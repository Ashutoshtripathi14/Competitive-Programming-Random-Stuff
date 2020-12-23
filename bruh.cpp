//my shoulder hurts T_T T_T Hope this passes ^_^
//Tuturu~

#include<stdio.h>
#include<ctime>
#include<stdlib.h>
#include<math.h>
#include <math.h>
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
#include <algorithm>
#include <iostream>
#include <deque>
#include <utility>
using namespace std;


#define ll long long
#define pll pair<ll, ll>
#define pb push_back
const int INF = 1e9 + 1;

ll cost[441][441];
ll dist[441][441];

int main(){
  for(ll i=0;i<441;i++){
    for(ll j=0;j<441;j++){
        cost[i][j]=dist[i][j]=INF;
    }
  }
  deque<pair<int,int>> doorsonedges;
  ll R,C;
  cin>>R>>C;
  for (ll i=1; i<=R; i++){
    string temp;
    cin>>temp;
    for (ll j=1; j<=C; j++)
    switch (temp[j-1]){
      case 'D':
        cost[i][j]=0;
        if (i==1 or j==1 or i==R or j==C){
          dist[i][j]=0;
          doorsonedges.push_back({i,j});
        }
        break;
      case 'c':
        cost[i][j]=1;
        break;
    }
  }

  ll tc,tr;
  cin>>tr>>tc;
  while (not doorsonedges.empty()){
    ll r=doorsonedges.front().first;
    ll c=doorsonedges.front().second;
    doorsonedges.pop_front();
    for (ll dr=1,dc=0,z=4; z--; swap(dr,dc*=-1)){
      ll a=r+dr;
      ll b=c+dc;
      if (dist[r][c]+cost[a][b]<dist[a][b]){
        doorsonedges.push_back({a,b});
        dist[a][b]=dist[r][c]+cost[a][b];
      }
    }
  }
  cout<<dist[tr][tc]<<endl;
}
