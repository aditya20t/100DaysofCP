/* Problem Statement : https://codeforces.com/contest/1406/problem/A */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define endl "\n"
#define len(x) x.size()
#define gcd(a, b) __gcd(a, b)
#define ste(v) v.begin(), v.end()
#define stea(arr, n) arr, arr+n


void solve(){
    // Solve here
    int n;
    cin>>n;

    map<int, int> m;

    for(int i=0;i<101;i++) {
        m.insert(mp(i, 0));
    }

    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        m[x]++;
    }
    int a=0, b=0;
    for(int i=0;i<101;i++) {
        if(m[i]>0) {
            a++;
            m[i]--;
        } else {
            break;
        }
    }
    for(int i=0;i<101;i++) {
        if(m[i]>0) {
            b++;
            m[i]--;
        } else {
            break;
        }
    }
    cout<<a+b<<endl;
}

int32_t main() {

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
