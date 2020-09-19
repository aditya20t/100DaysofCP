/* Problem Statement : https://practice.geeksforgeeks.org/problems/is-sudoku-valid/0 */

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--) {
	    int arr[9][9];
	    
	    for(int i=0;i<9;i++) {
	        for(int j=0;j<9;j++) {
	            cin>>arr[i][j];
	        }
	    }
	    
	    bool flag = false;
	    for(int i=0;i<9;i++) {
	        for(int j=i+1;j<9;j++) {
	            if(arr[i][i]==arr[j][i] and arr[i][i]!=0) {
	                flag = true;
	                break;
	            }
	        }
	        if(flag) break;
	        for(int j=i+1;j<9;j++) {
	            if(arr[i][i] == arr[i][j] and arr[i][i] != 0) {
	                flag = 1;
	                break;
	            }
	        }
	        if(flag) break;
	    }
	    
	    cout<<(flag?"0\n":"1\n");
	    
	}
	
	return 0;
}
