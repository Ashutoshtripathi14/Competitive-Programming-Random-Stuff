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
#include <fstream>


using namespace std;
#define ll long long
#define pll pair<ll, ll>
#define pb push_back
typedef std::pair<ll, ll> my_pair;

ifstream fin("jobs.in");
ofstream fout("jobs.out");
struct sort_pred
{
    bool operator()(const my_pair& left, const my_pair& right) const
    {
        if (left.first != right.first) {
            return left.first > right.first;
        }
        return left.second > right.second;
    }
};
void solve(){
  ll n;
  fin>>n;
  vector <my_pair> arr(n);
  vector <my_pair> arr2(n);
  for(ll i=0;i<n;i++){
    ll wt,lt;
    fin>>wt>>lt;
    arr[i]=make_pair(wt,lt);
    arr2[i]=make_pair(wt-lt,wt);
  }
  sort(arr2.begin(), arr2.end(), sort_pred());
  ll ans=0;
  ll ct=0;
  for(ll i=0;i<n;i++){
    ans+=(ct*(arr2[i].second));
    ct+=arr2[i].second-arr2[i].first;
  }
  cout<<ct<<endl;
}

int main(){
  solve();
}
