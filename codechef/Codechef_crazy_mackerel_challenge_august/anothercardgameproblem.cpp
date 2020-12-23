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
  ll a1=0;
  ll b1=0;
  if(a%9==0){
    a1=a/9;
  }else{
    a1=floor(a/9)+1;
  }

  if(b%9==0){
    b1=b/9;
  }else{
    b1=floor(b/9)+1;
  }

  if(b1<=a1){
    cout<<1<<" "<<b1<<endl;
  }else{
    cout<<0<<" "<<a1<<endl;
  }
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    solve();
  }
}
