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

char a[100001];
char b[100001];

int max(int x, int y){
  if(x>y){
    return x;
  }else{
    return y;
  }
}
void solve(){
  cin>>a>>b;
  ll n1=strlen(a);
  ll n2=strlen(b);
  ll i1=n1;
  ll i2=n2;
  ll i=0;
  for(;a[i] && a[i]==b[i];i++);
  for(;i1>=0 && i2>=0 && a[i1]==b[i2]; i1--, i2--);
  cout<<max(max(0,n2-n1),i2-i+1)<<endl;

}

int main(){

    solve();
}
