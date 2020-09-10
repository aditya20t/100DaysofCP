/* Problem Statement : https://codeforces.com/problemset/problem/337/A */

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
    int n, m;
    cin>>n>>m;

    int arr[m];
    for(int i=0;i<m;i++) cin>>arr[i];

    sort(arr, arr+m);
    int best = INT_MAX;

    for(int i=0;i<(m-n+1);i++) {
        best = min(best, abs(arr[i]-arr[i+n-1]));
    }

    cout<<(best==INT_MAX?0:best);
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
