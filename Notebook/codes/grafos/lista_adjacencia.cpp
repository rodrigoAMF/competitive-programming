#include <bits/stdc++.h>

using namespace std;
// 1 - Grafo sem pesos
map<int, vector<int> > adj_map;
// 2 - Grafo sem pesos (Usar de preferêncialmente essa)
vector<int> adj[10];
// 3 - Grafo com pesos
vector<pair<int, int> > adj_peso[10];

// Adicionar aresta usando representação 1
// Supondo que grafo seja não direcionado
void addEdge(map<int, vector<int> > adj_map, int u, int v){
	adj_map[u].push_back(v);
	adj_map[v].push_back(u);
}
// Adicionar aresta usando representação 2
// Supondo que grafo seja não direcionado
void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
}

// Adicionar aresta usando representação 3
// Supondo que grafo seja não direcionado
void addEdge(vector<pair<int, int> > adj[], int u, int v, int w) 
{ 
    adj[u].push_back(make_pair(v, w)); 
    adj[v].push_back(make_pair(v, w)); 
}


int main(){
	// 1
	addEdge(adj_map, 0, 1);
	addEdge(adj_map, 0, 2);
	addEdge(adj_map, 2, 3);
	
	// 2
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 2, 3);
	
	// 3
	addEdge(adj_peso, 0, 1, 10);
	addEdge(adj_peso, 0, 1, 5);
	addEdge(adj_peso, 0, 1, 15);

	return 0;
}
