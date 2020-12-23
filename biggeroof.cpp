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
#include <iomanip>
#include <utility>
using namespace std;


#define ll long long
#define pll pair<ll, ll>
#define pb push_back
const int INF = 1e9 + 1;
void solve(){
  ll n;
  cin>>n;
  ll arr[8]={0,1,2,9,44,265,1854,14833};
  if(n<=8){
    ll ore=1;
    for(ll i=1;i<=n;i++){
      ore*=i;
    }
    double ans=arr[n-1]/ore;
    cout<<fixed<<setprecision(7)<<ans;
  }else{
    double e=2.7182818284590452353602874713526624977572;
    double ans=1-(1/e);
    cout<<fixed<<setprecision(7)<<ans;
  }
}
int main(){
  solve();
}
