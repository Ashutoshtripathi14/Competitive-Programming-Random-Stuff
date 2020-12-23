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

void solve(){
  ll n,k;
  cin>>n>>k;
  bool valid=true;
  ll ans=-1;
  ll arr[i];
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  for(ll i=n-1;;i>=0;i--){
    ll x=arr[i];
    if(valid==true && x<=k && k%x==0){
      valid=false;
      ans=x;
    }
  }
  if(valid==false){
    cout<<ans<<endl;
  }else{
    cout<<-1<<endl;
  }
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    solve();
  }
}
