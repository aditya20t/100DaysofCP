/* Problem Statement : https://codeforces.com/problemset/problem/4/A */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back
 
bool cmp (int a, int b) {
    return a>b;
}
 
void solve(){
    // Solve here
    int n;
    cin>>n;
 
    if(n%2 or n==2) cout<<"NO";
    else cout<<"YES";
 
}
 
int main() {
 
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
