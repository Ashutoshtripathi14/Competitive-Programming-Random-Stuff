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
ll arr[500][500];
bool vis[500][500];
ll dfs(ll a,ll b,ll maxlength){
  vis[a][b]=true;
  maxlength=max(maxlength,arr[a][b]);
  for (ll dr=1,dc=0,z=4; z--; swap(dr,dc*=-1)){
    ll r=a+dr;
    ll c=b+dc;
    if (arr[r][c]>0 && !vis[r][c]){
      maxlength=dfs(r,c,maxlength);
    }
  }
  return maxlength;
}
void solve(){
  ll h,w;
  cin>>h>>w;
  for(ll i=0;i<500;i++){
    for(ll j=0;j<500;j++){
      arr[i][j]=0;
      vis[i][j]=false;
    }
  }
  ll mim=INF;
  for(ll i=0;i<h;i++){
    for(ll j=0;j<w;j++){
      cin>>arr[i][j];
      mim=min(mim,arr[i][j]);
    }
  }
  if(mim==0){
    mim=1;
  }
  for(ll i=0;i<h;i++){
    for(ll j=0;j<w;j++){
      arr[i][j]-=mim;
    }
  }

  ll count=0;
  for(ll i=0;i<h;i++){
    for(ll j=0;j<w;j++){
      if(arr[i][j]!=0 && !vis[i][j]){
        ll maxlength=dfs(i,j,arr[i][j]);
        //cout<<arr[i][j]<<" "<<maxlength<<endl;
        if(maxlength==1 && mim==0){
          continue;
        }else{
          count++;
        }
      }
    }
  }
  cout<<count<<endl;


}
int main(){
  solve();
}
