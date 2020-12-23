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
  ll n;
  cin>>n;
  vector<pll> arr;
  for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    arr.pb(make_pair(a,1));
    arr.pb(make_pair(b+1,-1));
  }
  sort(arr.begin(),arr.end());
  ll cnt=0;
  ll max_cnt=0;
  if(arr[0].second==1){
    cnt++;
    max_cnt=max(cnt,max_cnt);
  }
  for(ll i=1;i<arr.size();i++){
    if(arr[i].second==-1){
      max_cnt=max(cnt,max_cnt);
      cnt--;
    }
    if(arr[i].second==1){
      cnt++;
      max_cnt=max(cnt,max_cnt);
    }
  }
  if(max_cnt>2){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
  }
}

int main(){

    solve();
}
