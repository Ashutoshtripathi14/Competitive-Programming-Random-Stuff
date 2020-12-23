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

int max(int x, int y){
  if(x>y){
    return x;
  }else{
    return y;
  }
}

void solve(){
  double x;
  cin>>x;
  bool nosol=true;
  ll hohoho=(ll)(x*pow(10,4));
  ll tempb=pow(10,5)-(hohoho);
  vector<ll> answers;
  if(hohoho!=pow(10,5)){
    for(ll i=0;i<8;i++){
      ll tempa=pow(10,i+5) -pow(10,4);
      for(ll j=1;j<=9;j++){
        ll tempc=tempa*j;
        ll ans1=(tempc)/(tempb);
        if(ans1%pow(10,4)==0){
          nosol=false;
          cout<<
        }
      }
    }
  }
}

int main(){

    solve();
}
