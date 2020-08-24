/* Iterative DFS */

#include<bits/stdc++.h>
using namespace std;

class Graph {
	int v; // Number of vertices
	
	list<int> *graph;  // Adjacency list representation of graph
	
	public:
	
	Graph (int x) {
		v = x;
		graph = new list<int>[v]; 
	}  // Constructor for declaring the graph of 'v' vertices
	
	void addEdge(int a, int b, bool isBidir) {
		if(isBidir) {
			graph[a].push_back(b);
		} else {
			graph[a].push_back(b);
			graph[b].push_back(a);  //add the edge from a to b and b to a
		}                               
	}
	
	void DFS(int source) {
		vector<bool> visited(v, false); // Maintain a vector to keep the track of the visited array
		stack<int> s; //maintain a stack
		
		s.push(source);
		
		while(!s.empty()) {
			source = s.top();
			s.pop();
			
			if(!visited[source]) {
				cout<<source<<" ";
				visited[source] = true;
			}
			
			for(auto i = graph[source].begin(); i != graph[source].end(); i++) {
				if(!visited[*i]) s.push(*i);
			}
		}
		cout<<"\n";
	}
};


int main() {
	Graph g(5); // Declaration of graph of 6 vertices
	g.addEdge(1, 0, false);         // 1 -> 5
	g.addEdge(0, 2, false);         // 3 -> 4                  
	g.addEdge(2, 1, false);         // 4 -> 5
	g.addEdge(0, 3, false);         // 0 -> 3
	g.addEdge(1, 4, false);
	
	g.DFS(0); // Call DFS function arguments are source and number of vertices
	return 0;
}


/* Sample output
0 3 2 1 4 
*/

