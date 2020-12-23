//my shoulder hurts T_T T_T Hope this passes ^_^
//Tuturu~
//nevermind this is just maths :(
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
#define pb push_back
#define pii pair<int, int>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<ll, ll> pll;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 1;
double cabbage=1.00;
void solve(){
  ll n;
  cin>>n;
  ll oopsie=n*(n+1)/2;
  ll doopsie=0;
  if(oopsie%2==1){
    doopsie=0;
  }else{
    double tuturu=oopsie/2;
    double kul = sqrt(8*tuturu+1)/2;
    kul-=0.5;
    ll temp=(ll)(sqrt(8*tuturu+1)/2 - 0.5);
    //cout<<"cabbage"<<cabbage<<endl;
    double bruh=modf(kul,&cabbage);
    if(bruh==0){
      doopsie=((temp-1)*(temp)/2) + ((n-temp-1)*(n-temp)/2);
    }
    doopsie+=n-temp;
  }
  cout<<doopsie<<endl;
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
