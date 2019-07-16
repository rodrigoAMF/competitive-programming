void addEdge(vector<int> adj[], int u, int v, int w) 
{ 
    adj[u].pb(mp(v, w)); 
    adj[v].pb(mp(v, w)); 
}

// DFS não leva em consideração pesos dos grafos, por conta disso,
// procurar usar representação do grafo que não precisa de peso.

// Função para realizar DFS recursivamente 
// no grafo a partir do vértice u.
void DFSUtil(int u, vector<int> adj[], 
                    vector<bool> &visited) 
{ 
    visited[u] = true; 
    cout << u << " "; 
    for (int i=0; i<adj[u].size(); i++) 
        if (visited[adj[u][i]] == false) 
            DFSUtil(adj[u][i], adj, visited); 
} 

// Realiza DFSUtil() em todos
// os vértices não visitados.
void DFS(vector<int> adj[], int V) 
{ 
    vector<bool> visited(V, false); 
    for (int u=0; u<V; u++) 
        if (visited[u] == false) 
            DFSUtil(u, adj, visited); 
} 


int main(){
    int V = 5;
    // lista de adjacência
    vector<int> adj[V]; 
  
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    DFS(adj, V); 
    return 0; 
}