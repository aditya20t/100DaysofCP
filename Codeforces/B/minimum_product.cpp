/* Problem Statement : https://codeforces.com/contest/1409/problem/B */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
	// Solve here
	ll a, b, x, y, n;
	cin>>a>>b>>x>>y>>n;

	if((a-x)+(b-y) < n) {
		cout<<min(min((a*y), (b*x)), (x*y))<<endl;
		return;
	}

	ll p = (a-n);
	ll q = (b-n);

	ll ans1, ans2;

	if(p<x) {
		ll temp = x-p;
		ll temp1 = b-temp;

		ans1 = temp1*x;
	} else {
		ans1 = p*b;
	}

	if(q<y) {
		ll temp = y-q;
		ll temp1 = a-temp;

		ans2 = temp1*y;
	} else {
		ans2 = q*a;
	}

	cout<<min(ans1, ans2)<<endl;

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
