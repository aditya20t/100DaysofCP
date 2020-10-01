// Problem Statement : https://codeforces.com/contest/1408/problem/A

/*
    Author: Aditya Tomar
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

    int v[3][n];

    for(int i=0;i<3;i++) {
        for(int j=0;j<n;j++) {
            cin>>v[i][j];
        }
    }

    vector<int> ans;
    for(int i=0;i<n;i++) {
        if(i==0) ans.pb(v[0][0]);
        else if(i<n-1){
            for(int j=0;j<3;j++) {
                if(v[j][i] != ans[i-1]) {
                    ans.pb(v[j][i]);
                    break;
                }
            }
        } else {
            for(int j=0;j<3;j++) {
                if(v[j][i] != ans[i-1] and v[j][i] != ans[0]) {
                    ans.pb(v[j][i]);
                    break;
                }
            }
        }
    }

    for(auto i:ans) {
        cout<<i<<" ";
    }
    cout<<e;
    ans.clear();
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
