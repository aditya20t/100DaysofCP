/* Problem Statement : https://codeforces.com/problemset/problem/208/A */

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

    string ans ="";

    int i;
    for(i=0;i+2<l;) {
        if(i+2>l) {

        }
        if(s[i]=='W' and s[i+1] == 'U' and s[i+2] == 'B') {
            if(i>0)ans += " ";
            i+=3;
        } else {
            ans += s[i];
            i++;
        }
    }

    for(int j = i;j<l;j++) {
        ans += s[j];
    }
    cout<<ans<<endl;
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