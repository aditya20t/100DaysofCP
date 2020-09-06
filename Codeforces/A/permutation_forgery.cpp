/* Problem Statement : https://codeforces.com/contest/1405/problem/A */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
    // Solve here
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];

    for(int i=n-1;i>=0;i--) cout<<arr[i]<<" ";
    cout<<"\n";
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
