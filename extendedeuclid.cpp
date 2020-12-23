#include <cstdio>
#include <climits>
#include <cstdlib>
#include <cassert>
#include <cmath>
#include <cctype>
#include <cerrno>
#include <algorithm>
#include <list>
#include <queue>
#include <map>
#include <vector>
#include <cassert>

using namespace std;

#define REP(i,n) for(int _n=(n),i=0; i<_n; ++i)
#define FOR(i,a,b) for(int _b=(b),i=(a); i<=_b; ++i)
#define FORD(i,a,b) for(int _b=(b),i=(a); i>=_b; --i)
#define FORE(i,a)  for(VAR(i,a.begin()); i!=a.end(); ++i)

#define PB push_back
#define BEG begin()
#define END end()
#define SZ size()
#define MP make_pair
#define F first
#define S second
#define D double
#define LL long long
#define LD long double
#define VI vector<int>

vector<vector<vector<int> > > cycles;
vector<int> input;
vector<int> output;
int n;
LL K;

LL gcd(LL a,LL b){
	if (a<b) swap(a,b);
        if (b==0) return a; else return gcd(b,a%b);
}

LL maxdiv(LL n,LL d){
	LL r=1;
	for(;;){
		int k=gcd(n,d);
		if (k==1) break;
		r*=k; n/=k;
	}
	return r;
}

/* Extended Euclid copied from the library */

LL NWDR(LL a, LL b, LL &xp, LL &yp) {
	if (a==0) { xp=0; yp=1; return b; }
	LL x,y;
	int d = NWDR(b%a, a, x, y);
	yp = x;
	xp = y-(b/a)*x;
	return d;
}

LL RevMod(LL a, LL p){
	LL x, y;
	NWDR(a, p, x, y);
	if (x < 0LL) return (p - ((-x) % (LL)p)) % p;
	return x % (LL)p;
}
