/* Problem Statement : https://codeforces.com/problemset/problem/469/A */

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

    set<int> ans;

    int p;
    cin>>p;

    while(p--) {
    	int x;
    	cin>>x;
    	ans.insert(x);
    }

    int q;
    cin>>q;

    while(q--) {
    	int x;
    	cin>>x;
    	ans.insert(x);
    }

    if(ans.size() == n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

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