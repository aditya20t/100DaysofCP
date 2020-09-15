/* Problem Statement : https://codeforces.com/problemset/problem/476/A */

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

bool cmp(pair<int, int> p1, pair<int, int> p2) {
	return p1.first<p2.first;
}

void solve(){
    // Solve here
    int n,m;
    cin>>n>>m;
    int l=(n+1)/2;
    int a=(l+m-1)/m*m;
    a>n?cout<<-1:cout<<a;
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
