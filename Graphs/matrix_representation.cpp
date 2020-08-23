// Adjacency matrix representation 

#include<bits/stdc++.h>
using namespace std;

int graph[1000][1000] ={0}; // Declare a graph

void addEdge(int a,int b, bool bidir) {
	if(bidir) {
		graph[a][b] = 1;
		graph[b][a] = 1;
	} else {
		graph[a][b] = 1;
	}
}



int main() {
	// Number of vertices 
	int vertices = 6;
	
	
	addEdge(2, 3, true);
	addEdge(3, 4, true);
	addEdge(1, 5, true);
	
	// Print the graph
	for(int i=0;i<vertices;i++) {
		for(int j=0;j<vertices;j++) {
			if(graph[i][j] == 1) {  // Check if there is an edge or not
				cout<<"There is an edge from "<<i<<" to "<<j<<endl;
			}
		}
	}
	
	return 0;
}

/* Sample output
There is an edge from 1 to 5
There is an edge from 2 to 3
There is an edge from 3 to 2
There is an edge from 3 to 4
There is an edge from 4 to 3
There is an edge from 5 to 1
*/
