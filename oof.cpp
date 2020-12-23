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
  double cost;
  cin>>cost;
  ll n;
  cin>>n;
  double ans=0;
  for(ll i=0;i<n;i++){
    double a,b;
    cin>>a>>b;
    ans+=a*b;
  }
  ans=ans*cost;
  cout<<fixed<<setprecision(7)<<ans<<endl;
}
int main(){
  solve();
}
