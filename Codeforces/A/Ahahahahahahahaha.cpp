/* Problem Statement : https://codeforces.com/contest/1407/problem/A */

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

    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> v;
    int sum = 0;
    bool even = false;

    for(int i=0;i<n-1;i+=2) {
        if(arr[i]==arr[i+1]) {
            v.pb(arr[i]);
            v.pb(arr[i+1]);
        } else {
            v.pb(0);
        }
    }   

    int l = v.size();
    cout<<(l)<<endl;
    for(auto i:v) {
        cout<<(i)<<" ";
    }
    cout<<endl;
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
