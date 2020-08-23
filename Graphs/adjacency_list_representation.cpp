#include<bits/stdc++.h>
using namespace std;

// Add edge between the vertices
void addEdge(vector<int> graph[], int a, int b) {
	graph[a].push_back(b);   // The edges between the vertices are bi-directional
	graph[b].push_back(a);
}


int main() {
	int V = 6;  // Number of vertices in graph	
	vector<int> graph[V]; // Declare a graph, each pair represent the edges between the vertices
	
	addEdge(graph, 1, 2);
	addEdge(graph, 0, 2);
	addEdge(graph, 0, 4);
	addEdge(graph, 1, 5);
	addEdge(graph, 4, 3);
	addEdge(graph, 5, 2);
	
	// Print the graph
	for(int i=0;i<V;i++) {
		cout<<i;
		for(auto edge : graph[i]) {
			cout<<" -> "<<edge;
		}
		cout<<"\n";
	}
	return 0;
}


/* Sample output
0 -> 2 -> 4
1 -> 2 -> 5
2 -> 1 -> 0 -> 5
3 -> 4
4 -> 0 -> 3
5 -> 1 -> 2
*/
