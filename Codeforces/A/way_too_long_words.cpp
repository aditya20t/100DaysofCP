/* Problem statement : https://codeforces.com/problemset/problem/71/A */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
    // Solve here
    string s;
    cin>>s;

    int l = s.length();

    if(l>10) {
        cout<<s[0]<<l-2<<s[l-1]<<endl;
    } else {
        cout<<s<<endl;
    }
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
