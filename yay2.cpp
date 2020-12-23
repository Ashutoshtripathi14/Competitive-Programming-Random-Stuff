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
  ll n,m;
  cin>>n>>m;
  ll arr[n];
  ll count=0;
  ll flag=0;
  for(ll i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]==0){
        flag=1;
      }
  }
  count=1;
  ll arr1[m+1];
  memset(arr1,0,sizeof(arr1));
  arr1[0]=1;
  for(ll i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
      count++;
      arr1[count-1]=1;
    }
    else{
      arr1[count-1]+=1;
    }
  }
  if((flag==1 && count==m+1)||(flag==0 && count==m)){
    for(ll i=0;i<m+1;i++){
      if(arr1[i]!=0){
        for(ll j=0;j<arr1[i];j++){
          cout<<m-i<<endl;
        }
      }
    }
  }else{
    cout<<"ambiguous"<<endl;
  }

}
int main(){
  solve();
}
