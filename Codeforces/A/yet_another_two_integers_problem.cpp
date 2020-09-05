/* Problem Statement : https://codeforces.com/contest/1409/problem/A */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
    // Solve here
    int a, b;

    cin>>a>>b;

    int x = abs(b-a);

    if(x%10==0) {
        cout<<x/10<<endl;
    } else cout<<(x/10)+1<<endl;
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
