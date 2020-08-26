/* You are given two numbers n and k such that n is the
number of steps and k is max steps one can take at a time.
Print the max number of ways by which one can reach n. */

#include<bits/stdc++.h>
using namespace std;

int max_ways(int dp[], int n, int k) {
    // Base case
    if(n==0) {
        return 1;
    }

    if(dp[n] != 0) {
        return dp[n];
    }

    // Rec case
    int ways = 0;
    for(int i=1;i<=k;i++) {
        if(n-i>=0) {
            ways += max_ways(dp, n-i, k);
        }
    }
    return dp[n] = ways;
}

int main() {
    int n, k;
    cin>>n>>k;

    int dp[100] = {0};

    cout<<max_ways(dp, n, k)<<endl;

    return 0;
} 

/* sample case
4 3

output: 7
*/