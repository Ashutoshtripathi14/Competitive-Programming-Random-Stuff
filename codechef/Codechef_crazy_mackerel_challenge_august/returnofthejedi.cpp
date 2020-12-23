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
  ll a,b;
  cin>>a>>b;
  ll sum=0;
  while(b>0){
    sum+=b;
    b=floor(b/2);
  }
  if(sum>=a){
    cout<<1<<endl;
  }else{
    cout<<0<<endl;
  }
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    solve();
  }
}
