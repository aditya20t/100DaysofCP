/* Link to the question - https://practice.geeksforgeeks.org/problems/padovan-sequence */

#include<iostream>
using namespace std;
#define mod 1000000007
#define ll long long int

ll nth(int n, ll dp[]) {
    // Base case
    if(n==0 or n==1 or n==2) {
        return 1;
    }
    // Lookup
    if(dp[n] != -1) {
        return dp[n];
    }
    
    // Recursive Case
    return dp[n] = (nth(n-2,dp)%mod + nth(n-3, dp)%mod)%mod;
    
    
}

int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--) {
	    int n;
	    cin>>n;
	   ll dp[1000];
	   for(int i=0;i<1000;i++) dp[i] = -1;
	    cout<<nth(n, dp)<<endl;
	}
	return 0;
}

/* Sample Test Case
Input:
2
12
4
Output:
21
2
*/
