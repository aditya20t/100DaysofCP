/* Problem Statement : https://codeforces.com/contest/1405/problem/B */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
	// Solve here
	ll n;
	cin>>n;

	ll arr[n];

	for(ll i=0;i<n;i++) cin>>arr[i];
	
	ll sum = 0;
	ll ans = 0;

	for(int i=0;i<n;i++) {
		sum += arr[i];
		ans = min(ans, sum);
	}

	cout<<abs(ans)<<endl;

}

int main() {

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
