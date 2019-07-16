// Função utilitária para adicionar arestas
// em um grafo não direcionado.
// u = origem
// v = destino
void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].pb(v); 
    adj[v].pb(u); 
}

// BFS não leva em consideração pesos dos grafos, por conta disso,
// usar representação do grafo que não precisa de peso.
void BFS(vector<int> adj[], int s, int vertices) {
    // Marca todos os vértices como não visitado
    vector<bool> visited(vertices, false); 
    for(int i = 0; i < vertices; i++) 
        visited[i] = false; 
  
    // Cria uma fila para BFS
    list<int> queue; 
    
    // Marca o vértice atual como visitado, e adiciona à fila
    visited[s] = true; 
    queue.push_back(s); 
  
    // 'i' será usado para obter todos os
    // vértices adjacentes de um vértice
    vector<int>::iterator i; 
  
    while(!queue.empty()) 
    { 
        // tira um vértice da lista e printa ele
        s = queue.front(); 
        cout << s << " "; 
        queue.pop_front(); 
    
        // pega todos os vértices adjancetes do vértice
        // que saiu da fila. Se o adjacente não foi visitado,
        // então marca como visitado, e enfilera.
        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    } 
}

int main(){
    int vertices = 5; 
    vector<int> adj[vertices]; 
  
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    BFS(adj, 2, vertices); 

    return 0; 
}
