#include<stdio.h>
#include<ctime>
#include<stdlib.h>
#include<math.h>
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

#define fr first
#define sc second

#define int long long
#define pii pair<int, int>
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<ll, ll> pii;
const int MOD = 1e9 + 7;
string E[114] = {"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn","Fr","Ra","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Fl","Lv","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu","Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr"};
vector <string> ow;
vector <string> dw;
for (ll i=0; i<114; i++){
  if(E[i].length()==1){
    ow.pb(E[i]);
  }else{
    dw.pb(E[i]);
  }
}
ll own,dwn;
own=ow.size();
dwn=dw.size();

void solve(){
  string x;
  ll xn;
  xn=x.size();
  vector <ll> dp(xn,0);
  if(find(ow.begin(), ow.end(), x[0]) != ow.end()){
    dp[0]=1;
  }else{
    dp[0]=0;
  }
  if(find(dw.begin(), dw.end(), x[0]+x[1]) != dw.end()){
    dp[1]=1;
  }else{
    if(dp[0]=1 && find(ow.begin(),ow.end(),x[1])!=ow.end()){
      dp[1]=1;
    }else{
      dp[1]=0;
    }
  }
  for(ll i=2;i<xn;i++){
    if(find(dw.begin(),dw.end(),x[i]+x[i-1])!=dw.end() && dp[i-2]==1){
      dp[i]=1;
    }else if(find(ow.begin(),ow.end(),x[i])!=ow.end() && dp[i-1]==1){
      dp[i]=1;
    }else{
      dp[i]=0;
    }
  }
  if(dp[xn-1]==1){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
      solve();
    }
}
