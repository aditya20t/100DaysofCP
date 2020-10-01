/*
    Author: Aditya Tomar
    Problem Statement : https://codeforces.com/contest/1417/problem/A
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
    // Solve here
    int n, k;
    cin>>n>>k;
 
    vector<int> v(n);
 
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
 
    sort(v.begin(), v.end());
 
    int ans = 0;
 
    for(int i=1;i<v.size();i++) {
        ans += (((k-v[i])/v[0]));
    }
 
    cout<<ans<<endl;
    v.clear();

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
