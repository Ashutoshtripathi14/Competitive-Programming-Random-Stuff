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
  ll m,n;
  cin>>m>>n;
  string arr1[m];
  string arr2[n];
  ll count=0;
  for(ll i=0;i<m;i++){
    string temp;
    cin>>temp;
    if(temp!="?"){
        string temp2;
        cin>>temp2;
        temp+=temp2;
    }
    arr1[i]=temp;
  }
  for(ll i=0;i<n;i++){
    string temp;
    cin>>temp;
    if(temp!="?"){
        string temp2;
        cin>>temp2;
        temp+=temp2;
    }
    arr2[i]=temp;
  }
  for(ll i=0;i<=m-n;i++){
    ll flag=0;
    for(ll j=0;j<n;j++){
      if(!(arr1[j+i]==arr2[j]||arr1[j+i]=="?"||arr2[j]=="?")){
        flag=1;
        //cout<<arr1[j+i]<<" "<<arr2[j]<<endl;
        break;
      }
    }
    if(flag==1){
      //cout<<flag<<" "<<i<<endl;
      continue;
    }else{
      count++;
    }
  }
  cout<<count<<endl;

}
int main(){
  solve();
}
