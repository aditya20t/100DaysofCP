/* Problem Statement : https://codeforces.com/problemset/problem/160/A */

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

    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n, cmp);

    int temp = 0;
    int i=0;

    while(2*temp<sum) {
        temp += arr[i];
        i++;
    }
    if(2*temp == sum) cout<<i+1;
    else cout<<i;

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
