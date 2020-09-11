/* Problem Statement : https://codeforces.com/problemset/problem/318/A */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define endl "\n"
#define len(x) x.size()
#define gcd(a, b) __gcd(a, b)
#define ste(v) v.begin(), v.end()
#define stea(arr, n) arr, arr+n


void solve(){
    // Solve here
    ll a, b;
    cin>>a>>b;

    ll x = a&1?((a+1)/2):(a/2);
    ll ans;
    if(b<=x) {
    	ans = 1+((b-1)*2);
    } else {
    	ans = 2+((b-x-1)*2);
    }

    cout<<ans;
}

int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}