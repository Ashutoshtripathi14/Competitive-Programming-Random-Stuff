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

double t;
ll n;
vector<ll>values;

int max(int x, int y){
  if(x>y){
    return x;
  }else{
    return y;
  }
}
ll solve2(ll k, double cMin,double cMax, ll ccuts){
  if(k==n){
    return ccuts;
  }
  double aMax=cMin/t;
  double aMin=cMax*t;
  ll low=(ll)ceil(values[k]/aMax);
  ll hi=(ll)(values[k]/aMin);
  if(k==0){
    low=1;
    hi=values[0];
  }
  for(ll i=low;i<=hi;i++){
    double nL=values[k]/i;
    if(k==0){
      cMin=nL;
      cMax=nL;
    }
    ll ans=solve2(k+1,min(cMin,nL),max(cMax,nL),ccuts-1+i);
    if(ans!=-1){
      return ans;
    }
  }
  return -1;
}
void solve(){
  cin>>t;
  cin>>n;
  for(ll i=0;i<n;i++){
    ll temp;
    cin>>temp;
    values.pb(temp);
  }
  sort(values.begin(),values.end());
  cout<<solve2(0,values[0],values[0],0)<<endl;
}

int main(){

    solve();
}
