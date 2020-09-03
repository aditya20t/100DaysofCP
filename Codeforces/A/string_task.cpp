/* Problem link : https://codeforces.com/problemset/problem/118/A */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
    // Solve here
    string s;
    cin>>s;
    map<char, bool> v;
    v['a'] = true;
    v['e'] = true;
    v['i'] = true;
    v['o'] = true;
    v['u'] = true;
    v['A'] = true;
    v['E'] = true;
    v['I'] = true;
    v['O'] = true;
    v['U'] = true;
    v['y'] = true;
    v['Y'] = true;

    int l = s.size();
    // cout<<v['i']<<endl;
    for(int i=0;i<l;i++) {
        if(!v[s[i]]) {
            char x = tolower(s[i]);
            cout<<"."<<x;
        }
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
