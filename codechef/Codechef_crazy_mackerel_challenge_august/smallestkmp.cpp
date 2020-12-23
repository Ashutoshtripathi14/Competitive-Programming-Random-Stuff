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

ll somehow(char c){
    return (int(c)-97);
}

void solve(){
  string s,p;
  cin>>s>>p;
  vector <ll> arrc(26,0);
  for(ll i=0;i<s.length();i++){
    arrc[somehow(s[i])]++;
  }
  string beforep="";
  string afterp="";
  ll threshold=somehow(p[0]);

  ll diff=-1;
  ll start=somehow(p[0]);
  for(ll i=0;i<p.length();i++){
    if(somehow(p[i])!=start && diff!=-1){
      diff=somehow(p[i]);
    }
    arrc[somehow(p[i])]--;
  }
  if(diff>start){
    for(ll i=0;i<=threshold;i++){
      ll x=arrc[i];
      if(x>0){
        for(ll j=0;j<x;j++){
          beforep+=char(i+97);
        }
      }
    }
    for(ll i=threshold+1;i<26;i++){
      for(ll j=0;j<arrc[i];j++){
        afterp+=char(i+97);
      }
    }
    string final=beforep+p+afterp;
    cout<<final<<endl;
  }else{
    for(ll i=0;i<threshold;i++){
      ll x=arrc[i];
      if(x>0){
        for(ll j=0;j<x;j++){
          beforep+=char(i+97);
        }
      }
    }
    for(ll i=threshold;i<26;i++){
      for(ll j=0;j<arrc[i];j++){
        afterp+=char(i+97);
      }
    }
    string final=beforep+p+afterp;
    cout<<final<<endl;
  }
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    solve();
  }
}
