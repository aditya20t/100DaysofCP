/* Problem Statement : https://codeforces.com/problemset/problem/459/A */

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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a != c && b != d && abs(a - c) != abs(b - d))
        cout << -1 << endl;
    else if (a == c)
        cout << a + abs(b - d) << " " << b << " " << c + abs(b - d) << " " << d << endl;
    else if (b == d)
        cout << a << " " << b + abs(a - c) << " " << c << " " << d + abs(a - c) << endl;
    else
        cout << a << " " << d << " " << c << " " << b << endl;
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