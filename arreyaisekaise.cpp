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
#include <utility>
using namespace std;


#define ll long long
#define pll pair<ll, ll>
#define pb push_back
const int INF = 1e9 + 1;
void solve(){
  string inp;
  cin>>inp;
ll count[10];

  memset(count,0,sizeof(count));
  for(ll i=0;i<inp.size();i++){
    switch(inp[i]){
      case '0':
        count[0]++;
        break;
      case '1':
        count[1]++;
        break;
      case '2':
        count[2]++;
        break;
      case '3':
        count[3]++;
        break;
      case '4':
        count[4]++;
        break;
      case '5':
        count[5]++;
        break;
      case '6':
        count[6]++;
        break;
      case '7':
        count[7]++;
        break;
      case '8':
        count[8]++;
        break;
      case '9':
        count[9]++;
        break;
    }
  }
    vector<pll>arr(9);
    for(ll i=0;i<9;i++){
      arr[i]={count[i+1],i+1};
    }
    string ans="";
    sort(arr.begin(), arr.end());
    if(arr[0].first<=count[0]){
      for(ll i=0;i<=arr[0].first;i++){
        cout<<arr[0].second;
      }
      cout<<endl;
    }else{
      cout<<1;
      for(ll i=0;i<=count[0];i++){
        cout<<0;
      }
      cout<<endl;
    }

}
int main(){
  solve();
}
