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

ll INF=41;

void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i=0;i<n;i++){
    cin>>arr[i];
  }
  ll ans1=0;
  ll ans2=INF;
  for(ll i=0;i<n-2;i++){
    if(max(arr[i],arr[i+2])<ans2){
      ans1=i+1;
      ans2=max(arr[i],arr[i+2]);
    }
  }
  cout<<ans1<<" "<<ans2<<endl;
}

int main(){
  ll t;
  //cin>>t;
  t=1;
  while(t--){
    solve();
  }
}
