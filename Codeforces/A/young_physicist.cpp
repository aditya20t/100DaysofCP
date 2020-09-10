/* Problem Statement : https://codeforces.com/problemset/problem/69/A */

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
    int n;
    cin>>n;
    int s_a = 0, s_b=0, s_c=0;
    
    for(int i=0;i<n;i++) {
        int a, b, c;
        cin>>a>>b>>c;
        s_a += a;
        s_b += b;
        s_c += c;
    }
    if(s_a == 0 and s_b==0 and s_c==0) cout<<"YES";
    else cout<<"NO";
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
