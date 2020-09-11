/* Problem Statement : https://codeforces.com/problemset/problem/479/A */

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
    int arr[3];
    for(int i=0;i<3;i++) cin>>arr[i];

    sort(arr, arr+3);
	int ans;
	if(arr[0] == 1) {
		ans = (arr[0]+arr[1])*arr[2];
	} else {
		ans = arr[0]*arr[1]*arr[2];
	}

	cout<<ans<<endl;

}

int32_t main() {

    #ifndef ONLINE_JUDGE
    freopen("cfinput.txt", "r", stdin);
    freopen("cfoutput.txt", "w", stdout);
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