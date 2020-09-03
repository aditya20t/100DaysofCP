/* Problem Statement : https://codeforces.com/problemset/problem/58/A */

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
    string s;
    cin>>s;

    int l = s.length();
    
    string temp = "hello";
    
    bool flag = false;
    
    int j=0;
    
    for(int i=0;i<l;i++) {
        if(s[i] == temp[j]) j++;
    }

    if(j==5) cout<<"YES";
    else cout<<"NO";

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
