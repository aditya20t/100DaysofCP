/*
    Author: saiyan_01
    Problem Statement : https://codeforces.com/problemset/problem/1420/A
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
    int n;
    cin>>n;

    ll arr[n];
    bool flag = false;

    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=1;i<n;i++) {
        if(arr[i-1]<=arr[i]) flag = true;
    }

    if(flag) cout<<"YES\n";
    else cout<<"NO\n";

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
