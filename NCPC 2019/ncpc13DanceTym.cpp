//this problem reminds me of Groups IA and I want to kill myself. abstract algebra is hard :((

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

vector<ll> inp;
vector<ll> oup;
vector<vector<vector<ll> > > somebois;
ll K;
ll n;
//from geeksforgeeks
ll gcd(ll a,ll b){
	if (a<b){
    swap(a,b);
  }
  return (b==0 ? a : gcd(b,a%b));
}
int max(int x, int y){
  if(x>y){
    return x;
  }else{
    return y;
  }
}
ll mdiv(ll n,ll d){
	ll r=1;
	for(;;){
		ll k=gcd(n,d);
		if (k==1){
      break;
    }
		r*=k;
    n/=k;
	}
	return r;
}
ll extendedeuclid(ll a, ll b, ll &xp, ll &yp) {
	if (a==0){
     xp=0; yp=1; return b;
  }
	ll x,y;
	ll d = extendedeuclid(b%a, a, x, y);
	yp = x;
	xp = y-(b/a)*x;
	return d;
}

ll bruh(ll a, ll p){
	ll x, y;
	extendedeuclid(a, p, x, y);
	if (x < 0ll){
    return (p - ((-x) % (ll)p)) % p;
  }
	return x % (ll)p;
}
//end geeksforgeeks

void makesomebois(){
  vector<ll> v;
  vector <ll> v1(n,0);
  for(ll i=0;i<n;i++){
    if(!v1[i]){
      ll p=i;
      ll s=0;
      v.clear();
      while(!v1[p]){
        v.pb(p);
        v1[p]=1;
        s++;
        p=inp[p];
      }
      somebois[s].pb(v);
    }
  }
}

void bruhcabbage(ll t, ll q, ll r){
	ll T=t*r;
	ll Kp=(K/r)%t;
	ll a=bruh(Kp,t);
	for(ll i=0;i<r;i++){
    for(ll j=0;j<t;j++){
		if (i<r-1){
			oup[somebois[t][q+i][j]]=somebois[t][q+i+1][j];
    }
		else{
			oup[somebois[t][q+i][j]]=somebois[t][q][(j+a)%t];
    }
	}
}
}

ll rethembois(ll t){
	int s=somebois[t].size();
	if (s==0){
    return 0;
  }
	if (t==1){
		ll d=gcd(K,somebois[t].size());
		for(ll i=0;i<s;i+=d){
      bruhcabbage(t,i,d);
    }
		return 0;
	}
	ll d=gcd(K,t);
	ll r=mdiv(K,d);
	if (s%r!=0){
    return 1;
  }
	for(ll i=0;i<s;i+=r){
    bruhcabbage(t,i,r);
  }
	return 0;
}

void solve(){
  cin>>n;
  cin>>K;
  somebois=vector<vector<vector<ll> > >(n+1,vector<vector<ll> >());
  for(ll i=0;i<n;i++){
    ll temp;
    cin>>temp;
    temp--;
    inp.pb(temp);
  }
  makesomebois();
  bool flagfrick=true;
  oup=vector<ll>(n,-1);
  for(ll t=1;t<=n;t++){
    if(rethembois(t)){
      flagfrick=false;
      break;
    }
  }
  if(flagfrick){
    for(ll i=0;i<n;i++){
      if(i){
        cout<<" ";
      }
      cout<<oup[i]+1;
    }
    cout<<endl;
  }else{
    cout<<"Impossible"<<endl;
  }
}

int main(){

    solve();
}
