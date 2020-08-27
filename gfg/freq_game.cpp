// Problem Link : https://practice.geeksforgeeks.org/problems/frequency-game/1

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

int maxFreq(int arr[], int n) {
	sort(arr, arr+n);

	int freq = 0;

	for(int i=0;i<n-1;i++) {
		if(arr[i] == arr[i+1]) freq++;
		else break;
	}
	if(freq == 0) freq++;
	int temp = 1;
	int max = arr[0];
	for(int i=0;i<n-1;i++) {

		if(arr[i] == arr[i+1]) temp++;
		else{
			if(arr[i] > max and temp == freq) {
				max = arr[i];
				break;
			} else {
				temp = 1;
			}
		}
	}

	if(arr[n-1] > max and temp == freq) max = arr[n-1];
	return max;
}

void solve(){
	// Solve here
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}

	cout<<maxFreq(arr, n)<<endl;
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

/* Sample input
1
5
2 2 5 50 1

Output
50
*/
