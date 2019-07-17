#include <bits/stdc++.h>

// Nome de Tipos
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

// Valores
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

// Atalhos
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, n) for ( int i = 0; i < (n); ++i )

using namespace std;

// Program to find Dijkstra's shortest path using
// priority_queue in STL
#include<bits/stdc++.h>
using namespace std;

// iPair ==>  Integer Pair
typedef pair<int, int> iPair;
 
// This class represents a directed graph using
// adjacency list representation
class Graph
{
    int V;    // No. of vertices
 
    // In a weighted graph, we need to store vertex
    // and weight pair for every edge
    list< pair<int, int> > *adj;
 
public:
    Graph(int V);  // Constructor
 
    // function to add an edge to graph
    void addEdge(int u, int v, int w);
 
    // prints shortest path from s
    int shortestPath(int s, int dst);
};
 
// Allocates memory for adjacency list
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<iPair> [V];
}
 
void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
 
// Prints shortest paths from src to all other vertices
int Graph::shortestPath(int src, int dst)
{
    // Create a priority queue to store vertices that
    // are being preprocessed. This is weird syntax in C++.
    // Refer below link for details of this syntax
    // http://geeksquiz.com/implement-min-heap-using-stl/
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
 
    // Create a vector for distances and initialize all
    // distances as infinite (INF)
    vector<int> dist(V, INF);
 
    // Insert source itself in priority queue and initialize
    // its distance as 0.
    pq.push(make_pair(0, src));
    dist[src] = 0;
 
    /* Looping till priority queue becomes empty (or all
      distances are not finalized) */
    while (!pq.empty())
    {
        // The first vertex in pair is the minimum distance
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();
 
        // 'i' is used to get all adjacent vertices of a vertex
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = (*i).first;
            int weight = (*i).second;
 
            //  If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
 
    // Print shortest distances stored in dist[]

    return dist[dst];
}


int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	int n;

	cin >> n;

	int valores[n];
	int quantidade[7];

	memset(quantidade, 0, sizeof(quantidade));

	int maior = -1;
	int n_maior = 1;
	forn(i, n){
		cin >> valores[i];
		quantidade[valores[i]]++;
		if(quantidade[valores[i]] > maior){
			maior = quantidade[valores[i]];
			n_maior = valores[i];
		}
	}

	int V = n-1;
    Graph g(V);
 
    //  making above shown graph
    g.addEdge(0, 1, 1);
    g.addEdge(0, 2, 1);
    g.addEdge(0, 3, 1);
    g.addEdge(0, 4, 1);

    g.addEdge(1, 0, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 1);
    g.addEdge(1, 5, 1);

    g.addEdge(2, 0, 1);
    g.addEdge(2, 4, 1);
    g.addEdge(2, 5, 1);
    g.addEdge(2, 1, 1);

    g.addEdge(3, 0, 1);
    g.addEdge(3, 1, 1);
    g.addEdge(3, 5, 1);
    g.addEdge(3, 4, 1);

    g.addEdge(4, 0, 1);
    g.addEdge(4, 2, 1);
    g.addEdge(4, 3, 1);
    g.addEdge(4, 5, 1);

    g.addEdge(5, 1, 1);
    g.addEdge(5, 2, 1);
    g.addEdge(5, 3, 1);
    g.addEdge(5, 4, 1);

	int movimentos = 0;
	
	forn(i, n){
		if(valores[i] != n_maior){
			movimentos += g.shortestPath(valores[i]-1, n_maior-1);
		}
	}

	cout << movimentos << endl;

	return 0;
}