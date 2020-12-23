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
ll MAXN=350;
ll res=123*MAXN;
ll oopsie=0x7f7f7f7f;
ll maxtotimeconstraint=86400+3*MAXN+2*MAXN*180;
ll i;
ll t;

struct car{
  ll arr;
  ll last;
}
vector <car> west;
vector <car> east;
ll t;
ll dp[MAXN+1][MAXN+1][MAXN+1][2];
ll arc(ll lastdir,ll westd, ll eastd){
  if(lastdir==0){
    return westd;
  }else{
    return eastd;
  }
}
ll process(ll westd,ll eastd, ll irri, ll lastdir){
  ll dp2=dp[westd][eastd][irri][lastdir];
  if(dp2 == oopsie){
    if(arc1(lastdir,westd,eastd)==0){
      dp2=maxtotimeconstraint;
    }else{
      car thiscar = process(lastdir,west[westd-1],east[eastd-1]);
      if(lastdir!=0){
        eastd--;
      }else{
        westd--;
      }
      dp2=maxtotimeconstraint;
      for(ll j=0; j<2; j++){
        if(irri>0){
          dp2=min(dp2,calc(westd,eastd,irri-1,j)+(j==lastdir ? 3 : t));
        }
        ll nt=calc(westd,eastd,irri,j) + (j==lastdir ? 3 : t);
        if(nt<=thiscar.last){
          dp2=min(dp2,nt);
        }
      }
      if(dp2<maxtotimeconstraint){
        dp2=max(dp2,thiscar.arrival);
      }
    }
    return dp2;
  }
}

void solve(){
  ll n;
  cin>>t>>n;
  for(ll i=0;i<n;i++){
    string d;
    ll timeirr;
    Car temp;
    cin >> d >> temp.arr >> timeirr;
    temp.last = car.arr + timeirr;
    if(d=="E"){
      east.pb(car);
    }else{
      west.pb(car)
    }
    memset(&dp[0][0][0][0], oopsie, sizeof(dp));
    dp[0][0][0][0]=-3;
    dp[0][0][0][-1]=-3;
    for(i = 0; i<=n; i++){
      ll temp=min(process(west.size(),east.size(),i,0),process(west.size(),east.size(),i,1));
      if(temp<maxtotimeconstraint){
        break;
      }
    }
    cout<<i<<endl;
  }
}

int main(){
  solve();
}
