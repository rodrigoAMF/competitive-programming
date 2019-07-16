#include <bits/stdc++.h>

using namespace std;

int gasto;

void addEdge(vector<pair<int, int> > adj[], int v1, int v2, int custo)
{
    adj[v1].push_back(make_pair(v2, custo));
    adj[v2].push_back(make_pair(v1, custo));
}

void caminha(vector<pair<int, int> > adj[], int origem, int destino, int vertices){
    int atual = origem;
    int escolhido;
    int visitados[vertices];
    memset(visitados, 0, vertices*sizeof(visitados[0]));
    vector<pair<int, int> >::iterator it;

    while(atual != destino){
        int e_peso, e_numero;
        visitados[atual] = 1;
        e_peso = 2000000;
        for(it = adj[atual].begin(); it != adj[atual].end(); it++){
            if((it->second < e_peso && !visitados[it->first]) || it->first == destino){
                e_numero = it->first;
                e_peso = it->second;
            }
        }
        atual = e_numero;
        if(e_peso > gasto){
            gasto = e_peso;
        }
    }
}

int main(){
	int n, m;
    int u,v,w;
    int q;
    int x, y;

    scanf("%d %d", &n, &m);

    vector<pair<int, int> > adj[n];

    for(int i = 0; i < m; i++){
        scanf("%d %d %d", &u, &v, &w);
        addEdge(adj, u, v, w);
    }

    scanf("%d", &q);

    for(int i = 0; i < q; i++){
        gasto = 0;
        scanf("%d %d", &x, &y);
        printf("origem: %d destino: %d\n", x, y);
        caminha(adj, x, y, n);
        printf("%d\n", gasto);
    }

	return 0;
}