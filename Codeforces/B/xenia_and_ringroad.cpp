/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/problemset/problem/339/B
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define e "\n"
#define len(x) x.size()
#define gcd(a, b) __gcd(a, b)
#define ste(v) v.begin(), v.end()
#define stea(arr, n) arr, arr+n


void solve(){
    // Solve here
    ll n, m;
    cin>>n>>m;
    
    ll arr[m];
    for(ll i=0;i<m;i++) cin>>arr[i];
    ll ans=arr[0]-1;
    
    for(int i=0;i<m-1;i++) {
        if(arr[i+1]>=arr[i]) ans += arr[i+1]-arr[i];
        else ans += n-(arr[i]-arr[i+1]);
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
