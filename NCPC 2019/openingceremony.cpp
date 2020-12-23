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

ll mod=360000;

bool find(ll arr1[],arr2[]){
  ll n = sizeof(arr1)/sizeof(arr1[0]);
  ll h = sizeof(arr2)/sizeof(arr2[0]);
  cout<<n<<" "<<h<<endl;
  return true;
}
void solve(){
  ll n;
  cin>>n;
  ll clock[2][n];
  ll diffs[2][n];
  for(ll i=0;i<n;i++){
    cin>>clock[0][i];
  }
  for(ll i=0;i<n;i++){
    cin>>clock[1][i];
  }
  for(ll i=1;i<n;i++){
    diffs[0][i]=clock[0][i]-clock[0][i-1];
  }
  diffs[0][0]=mod+clock[0][0]-clock[0][n-1];
  for(ll i=1;i<n;i++){
    diffs[1][i]=clock[1][i]-clock[1][i-1];
  }
  diffs[1][0]=mod+clock[1][0]-clock[1][n-1];
  ll c1diffscombo[2*n];
  ll c2diffs[n];
  for(ll i=0;i<n;i++){
    c1diffscombo[i]=diffs[0][i];
    c2diffs[i]=diffs[1][i];
  }
  for(ll i=n;i<2n;i++){
    c1diffscombo[i]=diffs[0][i-n];
  }
  bool ret=find(c2diffs,c1diffscombo);
  if(ret){
    cout<<"possible"<<endl;
  }else{
    cout<<"impossible"<<endl;
  }



}

int main(){

    solve();
}
