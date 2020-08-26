/* You are given two numbers n and k such that n is the
number of steps and k is max steps one can take at a time.
Print the max number of ways by which one can reach n. */

// In this we will solve in bottom up manner

#include<bits/stdc++.h>
using namespace std;

int max_ways(int n, int k) {
    int dp[100] = {0};

    dp[0] = 1;

    for(int i=1;i<=n;i++) {
        dp[i] = 0;
        for(int j=1;j<=k;j++) {
            if(i-j>=0) {
                dp[i] += dp[i-j];
            }
        }
    }

    return dp[n];
}

int main() {
    int n, k;
    cin>>n>>k;

    cout<<max_ways(n, k)<<endl;

    return 0;
} 

/* sample case
4 3

output: 7
*/