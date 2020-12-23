//my shoulder hurts T_T T_T Hope this passes ^_^
//Tuturu~
//also, displacing everyhting by 1 to make stuff easier to understand

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

#define pii pair<int, int>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<ll, ll> pll;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 1;

ll n;
ll matrix[65][65];

void bigT(ll k){
  for(ll i=1;i<=k;i++){
    for(ll j=1;j<=k;j++){
      if(j>i){
        swap(matrix[i][j],matrix[j][i]);
      }
    }
  }
}

void solve(){
  cin>>n;
  for(ll i=1;i<=n;i++){
    for(ll j=1;j<=n;j++){
      cin>>arr[i][j];
    }
  }
  bool oopsie=true;
  while(true){
    oopsie=
  }
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
