#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define MAXN 350
ll res = 123*MAXN;
const ll maxTotalTime = 86400+MAXN*3+2*MAXN*180;
ll oopsie=0x7f7f7f7f;


struct car
{
	ll arr;
	ll last;
};
vector<car> west;
vector<car> east;
int maxtotimeconstraint;

ll dp[MAXN+1][MAXN+1][MAXN+1][2]; // totalTime = dp[eastd][westd][nirri][lastToWest=0,lastdir=1]

ll process(int westd, int eastd, int nirri, int lastdir)
{
	ll &dp2 = dp[westd][eastd][nirri][lastdir];
	if (dp2 == oopsie)
	{
		if ((lastdir ? eastd : westd) == 0)
			dp2 = maxTotalTime;
		else
		{
			const car &tempc = (lastdir ? east[eastd-1] : west[westd-1]);
			if (lastdir)
				--eastd;
			else
				--westd;
			dp2 = maxTotalTime;
			for (int dir = 0; dir < 2; ++dir)
			{
				if (nirri > 0)
					dp2 = min(dp2, process(westd, eastd, nirri-1, dir) + (dir == lastdir ? 3 : maxtotimeconstraint));
				int temptime = process(westd, eastd, nirri, dir) + (dir == lastdir ? 3 : maxtotimeconstraint);
				if (temptime <= tempc.last)
					dp2 = min(dp2, temptime);
			}
			if (dp2 < maxTotalTime)
				dp2 = max(tempc.arr, dp2);
		}
	}
	return dp2;
}

int main()
{
	ll n;
	cin >> maxtotimeconstraint >> n;
	for (ll i = 0; i < n; ++i){
		string d;
		ll maxStillTime;
		car Ho;
		cin >> d >> Ho.arr >> maxStillTime;
		car.last = Ho.arr + maxStillTime;
		if (d == "W"){
			west.push_back(Ho);
		}else if (d == "E"){
			east.push_back(Ho);
		}
	}
	memset(&dp[0][0][0][0], oopsie, sizeof(dp));
	dp[0][0][0][0] = dp[0][0][0][1] = -3;
	ll nirri;
	for (nirri = 0; nirri <= n; ++nirri){
		ll t = min( process((int)west.size(), (int)east.size(), nirri, 0), process((int)west.size(), (int)east.size(), nirri, 1));
		if (t < maxTotalTime){
			break;
		}
	}
	cout << nirri << endl;
	return 0;
}
