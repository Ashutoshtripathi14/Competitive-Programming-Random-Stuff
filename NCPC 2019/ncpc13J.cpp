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


ld a1;
ld a2;


int max(int x, int y){
  if(x>y){
    return x;
  }else{
    return y;
  }
}
ld g(ld a, ld b){
  return(expl(-(a*a)/a2)-expl(-(b*b)/a2));
}
void solve(){
  ld r1,r2,r3,r4,r5,r6;
  cin>>r1>>r2>>r3>>r4>>r5>>r6;
  ld a1;
  cin>>a1;
  a2=(2.0)*a1*a1;
  ld ans;
  ans=(50.0 * g(0.0,r1))+(25.0 * g(r1,r2))+(10.5 * g(r2,r3))+(31.5 * g(r3,r4))+(10.5 * g(r4,r5))+(21.0 * g(r5,r6));
  printf("%.10Lf\n",ans);
}

int main(){

    solve();
}
