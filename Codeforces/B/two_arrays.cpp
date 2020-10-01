// Problem Statement : https://codeforces.com/contest/1417/problem/B

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

    ll n, k;

    cin>>n>>k;

    vector<ll> v(n);

    map<ll, ll> m1;
    map<ll, ll> m2;


    for(int i=0;i<n;i++) cin>>v[i];

    vector<int> ans(n);

    for(int i=0;i<n;i++) {
        if(m1[k-v[i]] == m2[k-v[i]]) {
            ans[i] = 0;
            m1[v[i]]++;
        } else if(m1[k-v[i]] < m2[k-v[i]]){
            ans[i] = 0;
            m1[v[i]]++;
        } else {
            ans[i] = 1;
            m2[v[i]]++;
        }
    }

    for(auto i:ans) {
        cout<<i<<" ";
    }
    cout<<endl;
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
