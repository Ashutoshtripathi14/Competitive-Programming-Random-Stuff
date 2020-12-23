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

ll mod=360000;
ll T1[300000];
ll T2[300000];
ll hay[500000];
ll needle[300000];
//trying to find the needle in the haystack(kmp)


bool kmp(ll H, ll N) {
	ll prefix[300000];
	prefix[0] = -1;
	for (ll i = 1; i < N; ++i) {
		ll k = prefix[i-1];
		while (k >= 0 & needle[k+1] != needle[i])
			k = prefix[k];
		if (needle[k+1] == needle[i])
			prefix[i] = k+1;
		else
			prefix[i] = -1;
	}

	ll j = -1;
	for (ll i = 0; i < H; ++i) {
		while (j != -1 && needle[j+1] != hay[i])
			j = prefix[j];
		if (needle[j+1] == hay[i])
			++j;
		if (j == N-1)
			return true;
	}
	return false;
}

int main() {
	ll n;
	cin>>n;
	for (ll i = 0; i < n; i++){
		cin>>T1[i];
	}
	for(ll i=0;i<n;i++){
		cin>>T2[i];
	}
	sort(T1, T1+n);
	sort(T2, T2+n);
	for (ll i = 1; i < 2*n; ++i){
		hay[i-1] = (T1[i % n]-T1[(i-1)%n] + mod) % mod;
	}
	for (ll i = 1; i < n; ++i){
		needle[i-1] = T2[i]-T2[i-1];
	}
    if(kmp(2*n-1,n-1)){
        cout<<"possible"<<endl;
    }else{
        cout<<"impossible"<<endl;
    }

}
