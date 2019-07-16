#include <bits/stdc++.h>

using namespace std;

#define INFINITO 10000000

void addEdge(vector<pair<int, int> > adj[], int v1, int v2, int custo)
{
    adj[v1].push_back(make_pair(v2, custo));
}

int dijkstra(vector<pair<int, int> > adj[], int orig, int dest, int vertices)
{
    // vetor de distâncias
    int dist[vertices];

    /*
        vetor de visitados serve para caso o vértice já tenha sido
        expandido (visitado), não expandir mais
    */
    int visitados[vertices];

    // fila de prioridades de pair (distancia, vértice)
    priority_queue < pair<int, int>,
                    vector<pair<int, int> >, greater<pair<int, int> > > pq;

    // inicia o vetor de distâncias e visitados
    for(int i = 0; i < vertices; i++)
    {
        dist[i] = INFINITO;
        visitados[i] = false;
    }

    // a distância de orig para orig é 0
    dist[orig] = 0;

    // insere na fila
    pq.push(make_pair(dist[orig], orig));

    // loop do algoritmo
    while(!pq.empty())
    {
        pair<int, int> p = pq.top(); // extrai o pair do topo
        int u = p.second; // obtém o vértice do pair
        pq.pop(); // remove da fila

        // verifica se o vértice não foi expandido
        if(visitados[u] == false)
        {
            // marca como visitado
            visitados[u] = true;

            vector<pair<int, int> >::iterator it;

            // percorre os vértices "v" adjacentes de "u"
            for(it = adj[u].begin(); it != adj[u].end(); it++)
            {
                // obtém o vértice adjacente e o custo da aresta
                int v = it->first;
                int custo_aresta = it->second;

                // relaxamento (u, v)
                if(dist[v] > (dist[u] + custo_aresta))
                {
                    // atualiza a distância de "v" e insere na fila
                    dist[v] = dist[u] + custo_aresta;
                    pq.push(make_pair(dist[v], v));
                }
            }
        }
    }

    // retorna a distância mínima até o destino
    return dist[dest];
}

int main()
{
    int vertices = 10;
	vector<pair<int, int> > adj[vertices];

	addEdge(adj, 0, 1, 4);
	addEdge(adj, 0, 2, 2);
	addEdge(adj, 0, 3, 5);
	addEdge(adj, 1, 4, 1);
	addEdge(adj, 2, 1, 1);
	addEdge(adj, 2, 3, 2);
	addEdge(adj, 2, 4, 1);
	addEdge(adj, 3, 4, 1);

	cout << dijkstra(adj, 1, 3, vertices) << endl;

	return 0;
}