// Problem Statement : https://www.codechef.com/LTIME88B/problems/ROOTTREE

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
    int ans = 0;
    vector<int> v(n);

    for(int i=0;i<n-1;i++) {
        int u, w;
        cin>>u>>w;

        u--;
        w--;

        v[w]++;
    }

    for(auto i:v) {
        if(i==0) ans++;
    }

    cout<<ans-1<<endl;
}

int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
