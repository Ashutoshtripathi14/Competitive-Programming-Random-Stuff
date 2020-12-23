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
#define pii pair<int, int>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<ll, ll> pll;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 1;
ll n;
vector <ll> bruh[6];
//ll maxa=0;
//ll mini=INF;

void solve(){
  //maxa=1;
  //mini=INF;
  ll n;
  cin>>n;
  ll dp[n][n];
  memset(dp,0,sizeof(dp));
  vector <ll> inp(n);
  for(ll i=0;i<n;i++){
    cin>>inp[i];
  }
  for(ll i=0;;i<n;i++){
    dp[i][i]=1;
  }
  for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
      //checking if signs are same
      if(((inp[i]-inp[j])*(j-1))>0){
        dp[i][j]=1;
        for(ll k=i;k<n;k++){
          if(dp[j][k]==1){
            dp[i][k]=1;
          }
        }
      }
    }
  }
  for(ll i=0;i<n;i++){
    ll temp=(10*inp[i])+i;
    for(ll j=0;j<n;j++){
      if(dp[i][j]==1 && (10*inp[j])+j<d){
        temp=(10*inp[j])+j;
      }
    }
    for(ll j=0;j<n;j++){
      if((10*inp[j])+j >=d && j<i){
        dp[i][j]=1;
      }
    }
  }
  ll maxa=INF;
  ll mini=(-1)*INF;
  for(ll i=0;i<n;i++){
    ll cnt=0;
    for(ll j=0;j<n;j++){
      cnt+=dp[i][j];
    }
    mini=min(mini,cnt);
    maxa=max(maxa,cnt);
  }
  cout<<mini<<" "<<maxa<<endl;

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
