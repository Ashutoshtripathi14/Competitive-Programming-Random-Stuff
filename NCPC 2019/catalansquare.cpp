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
  ll n;
  cin>>n;
  vector <ll> c(n+2,0);
  c[0]=1;
  for(ll i=1;i<n+2;i++){
    c[i]=c[i-1]*2*(2*i-1)/(i+1);
  }
  cout<<c[n+1]<<endl;
}

int main(){

    solve();
}
