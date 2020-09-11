/* Problem Statement : https://codeforces.com/problemset/problem/443/A */

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
    string s;
    getline(cin, s);

    int l = s.length(); 
    set<char> ans;

    for(int i=0;i<l;i++) {
        if(s[i] == '{' or s[i] == '}' or s[i]==' ' or s[i] == ',') {
            continue;
        } else ans.insert(s[i]);
    }

    cout<<ans.size()<<endl;
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
