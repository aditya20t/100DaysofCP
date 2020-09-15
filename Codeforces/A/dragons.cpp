/* Problem Statement : https://codeforces.com/problemset/problem/230/A */

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

bool cmp(pair<int, int> p1, pair<int, int> p2) {
	return p1.first<p2.first;
}

void solve(){
    // Solve here
    int s, n;
    cin>>s>>n;

    vector<pair<int, int>> v;

    for(int i=0;i<n;i++) {
    	int a, b;
    	cin>>a>>b;

    	v.pb(mp(a, b));
    }
    sort(v.begin(), v.end(), cmp);
    bool flag = false;
    for(auto i:v) {
    	if(i.first>=s) {
    		flag = true;
    		break;
    	} else {
    		s+=i.second;
    	}
    }

    if(flag) cout<<"NO\n";
    else cout<<"YES\n";
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
