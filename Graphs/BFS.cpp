/* BFS */

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
	
	void BFS(int source) {
		vector<bool> visited(v, false);  // Maintain a visited array
		
		// Mark all the vertices as not visited
		for(int i=0;i<v;i++) visited[i] = false;
		
		list<int> queue;
		
		// Mark the source node as visited and push it into the queue
		visited[source] = true;
		queue.push_back(source);
		
		while(!queue.empty()) {
			source = queue.front();
			queue.pop_front();
			cout<<source<<" ";
			
			// Push the adjacent element of the source into the queue those are not visited
			for(auto i=graph[source].begin(); i!=graph[source].end();i++) {
				if(!visited[*i]) {
					visited[*i] = true;   
					queue.push_back(*i);
				}
			}
		}
	}
};


int main() {
	Graph g(5); // Declaration of graph of 6 vertices
	g.addEdge(1, 0, false);         
	g.addEdge(0, 2, false);         
	g.addEdge(2, 1, false);         
	g.addEdge(0, 3, false);         
	g.addEdge(1, 4, false);
	
	g.BFS(1); // Call DFS function arguments are source and number of vertices
	return 0;
}


/* Sample output
1 0 2 4 3
*/

