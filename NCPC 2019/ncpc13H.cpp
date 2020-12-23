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
  ll n;
  cin>>n;
  string s1,s2;
  ll o=n%2;
  cin>>s1;
  cin>>s2;
  ll a=s1.length();
  bool ans=true;
  for(ll i=0;i<a;i++){
    if((o==0 && s1[i]!=s2[i])||(o==1 && s1[i] == s2[i])){
      ans=false;
      break;
    }
  }
  if(ans){
    cout<<"Deletion succeeded"<<endl;
  }else{
    cout<<"Deletion failed"<<endl;
  }
}

int main(){

    solve();
}
