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
#define ld long double
#define pll pair<ll, ll>
#define pb push_back

ld s1;
ld s2;

int max(int x, int y){
  if(x>y){
    return x;
  }else{
    return y;
  }
}

ld g(ld a,ld b){
  return (expl(-(a*a)/s2)-expl(-(b*b)/s2));
}

void solve(){
  ld rs[6];
  for(ll i=0;i<6;i++){
    cin>>rs[i];
  }
  cin>>s1;
  s2=2.0*s1*s1;
  ld ans;
  ans=(50.0 * g(0.0,rs[0]))+(25.0 * g(rs[0],rs[1]))+(10.5 * g(rs[1],rs[2]))+(31.5 * g(rs[2],rs[3]))+(10.5 * g(rs[3],rs[4]))+(21.0 * g(rs[4],rs[5]));
  printf("%.10Lf\n",ans);
}
int main(){
  solve();
  return 0;
}
