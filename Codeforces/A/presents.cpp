/* Problem Statement : https://codeforces.com/problemset/problem/136/A */

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

    map<int, int> m;
    int x = 1;
    for(int i=0;i<n;i++) {
        int c;
        cin>>c;
        m[c] = x;
        x++;
    }

    for(auto i: m) {
        cout<<i.second<<" ";
    }
    cout<<endl;
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
