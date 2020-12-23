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


using namespace std;
#define ll long long
#define pll pair<ll, ll>
#define pb push_back

vector <ll> hum(1000000007,0);
vector <ll> huh(1000000007,0);
ll  arr[1000000007];
ll mod=1000000007;

bool incrementpossible(ll n){
  for(ll i=0;i<n;i++){
    if(arr[i]!=hum[i]){
      return true;
    }
  }
  return false;
}
ll processpls(ll n){
  ll ans=1000000007;
  ll c=0;
  for(ll i=0;i<n;i++){
    if(hum[i]>c){
      ans=i;
      c=hum[i];
    }
  }
  return ans;
}

void incrementpls(ll n,ll ohk){
  ll c=0;
  for(ll i=ohk;i>=0;i++){
    if(hum[i]+1<=arr[i]){
      hum[i]=arr[i];
      break;
    }else{
      hum[i]=0;
    }
  }
}
void solve(){
  ll n;
  for(ll i=0;i<1000000007;i++){
    arr[i]=0;
  }
  huh.clear();
  hum.clear();
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  for(ll i=0;i<n;i++){
    huh[arr[i]-1]++;
  }
  vector <ll> ans(n,0);
  ll ohk=0;
  for(ll i=n-1;i>=0;i++){
    if(huh[i]>0){
      ohk=i;
      break;
    }
  }

  while(incrementpossible(n)){
    ll x=processpls(n);
    ans[x]++;
    incrementpls(n,ohk);
  }
  for(ll i=0;i<n;i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    solve();
  }
}
