/* Problem Statement : https://codeforces.com/problemset/problem/339/A */

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
    vector<int>v;
    for(int i=0;i<l;i+=2) {
        int a = s[i]-'0';
        v.pb(a);
    }

    sort(v.begin(), v.end());
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<"+";
    }
    cout<<v[v.size()-1];
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
