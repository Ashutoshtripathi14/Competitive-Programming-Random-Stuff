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

ll somehow(char c){
    return (int(c)-97);
}

void solve(){
    string initial;
    cin>>initial;
    ll n;
    cin>>n;
    ll necessary=somehow(initial[initial.length()-1]);
    vector <string> arr(n,"");
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <ll> oosh(26,0);
    for(ll i=0;i<n;i++){
        oosh[somehow(arr[i][0])]+=1;
    }
    if(oosh[necessary]==0){
        cout<<"?"<<endl;
    }else if(oosh[necessary]!=0){
        char ho=char(necessary+97);
        vector <string> printo;
        vector <string> outo;
        for(ll i=0;i<n;i++){
            if(arr[i][0]==ho){
                printo.pb(arr[i]);
            }
        }
        string answer="";

        for(ll i=0;i<printo.size();i++){
            ll ohp=somehow(printo[i][printo[i].size()-1]);
            if(oosh[ohp]==0 || oosh[ohp]==1 && necessary==ohp){
                answer=printo[i]+"!";
                break;
            }
        }
        if (answer==""){
            cout<<printo[0]<<endl;
        }else{
            cout<<answer<<endl;
        }
    }

}

int main(){

    solve();
}
