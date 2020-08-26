//Find the length of the subarray with maximum OR.

// Idea: This problem is same as the maximum subarray sum

#include<bits/stdc++.h>
using namespace std;

int max_subarray_OR(int *arr, int n) {
    int dp[100] = {0};
    int length = 1;
    int max_or_sofar = 0;

    for(int i=1;i<n;i++) {
        dp[i] = dp[i-1] | arr[i];
        if(dp[i] < max_or_sofar) {
            dp[i] = 0;
        }
         if(max_or_sofar == dp[i]) length++;
        max_or_sofar = max(dp[i], max_or_sofar);
        
    }
    cout<<max_or_sofar<<" ";
    return length;

}

int main() {
    int arr[] = {2, 6, 2, 8, 4, 5}; // Take the array as input

    int max_length = max_subarray_OR(arr, 6);

    cout<<max_length<<endl;
    return 0;
}

/* sample output
15 3   
15 is max OR so far and the elements are 8, 6, 5 */
