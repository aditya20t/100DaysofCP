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
	
	void DFSUtil(int s, bool visited[]) {
		visited[s] = true;
		cout<<s<<" ";
		
		for(auto i=graph[s].begin(); i!=graph[s].end(); i++) {
			if(!visited[*i]) DFSUtil(*i, visited);
		}
	}
	
	void DFS(int source) {
		bool *visited = new bool[v];
		for(int i=0;i<v;i++) visited[i] = false;  // Mark all the vertices as not visited
		
		DFSUtil(source, visited);
	}
};


int main() {
	Graph g(5); // Declaration of graph of 6 vertices
	g.addEdge(1, 0, false);         
	g.addEdge(0, 2, false);         
	g.addEdge(2, 1, false);         
	g.addEdge(0, 3, false);         
	g.addEdge(1, 4, false);
	
	g.DFS(4); // Call DFS function arguments are source and number of vertices
	return 0;
}


/* Sample output
4 1 0 2 3
*/

