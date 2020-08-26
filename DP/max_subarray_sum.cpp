// Find the max sub-array sum of the given array and print it

#include<bits/stdc++.h>
using namespace std;

int max_subarray_sum(int *arr, int n) {  // take array and the size of the array as the parameters
    int dp[100] = {0};
    dp[0] = arr[0];
    int max_so_far = dp[0];

    for(int i=0;i<n;i++) {
        dp[i] = dp[i-1]+arr[i];
        if(dp[i]<0) {
            dp[i] = 0;
        }
        max_so_far = max(dp[i], max_so_far);
    }
    return max_so_far;
}

int main() {
    int arr[] = {-3, 4, 3, -1, 2};  // Take this array 
    int maxSum = max_subarray_sum(arr, 5);  // Call the function by giving arr and size of array as the parameters

    cout<<maxSum<<"\n";
    return 0;
}

/* Sample output
8    (Sum of the subarray from the index 1 to 4)  
Time complexity: O(n) where n is size of the array
*/