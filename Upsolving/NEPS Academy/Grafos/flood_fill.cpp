#include <bits/stdc++.h>

#define MAXV 50000

#define forn(i, n) for(int i = 0; i < n; ++i)
#define for1n(i, n) for(int i = 1; i <= n; ++i)

using namespace std;

typedef struct{
	// destino, peso
	vector<pair <int, int> > grafo[MAXV];
	// visitado, tempos estrutura auxiliar DFS e BFS
	bool visitado[MAXV];
	int tempo_descoberta[MAXV];
	int n_vertices = 0;
}Grafo;

void DFS(Grafo &g, int origem){
	forn(i, g.n_vertices){
		g.visitado[i] = false;
		g.tempo_descoberta[i] = 0;
	}
	int tempo_atual = 0;
	stack<int> s;
	s.push(origem);
	g.tempo_descoberta[origem] = tempo_atual;
	while(!s.empty()){
		// item do topo da pilha
		int u = s.top();
		g.tempo_descoberta[u] = ++tempo_atual;
		s.pop();
		if(!g.visitado[u]){
			g.visitado[u] = true;
			forn(i, g.grafo[u].size()){
				// vértice adjacente de u
				int w = g.grafo[u].at(i).first;
				if(!g.visitado[w]){
					s.push(w);
				}
			}
		}
	}
}

int main(){
	int n, m, origem, destino;
	Grafo g;

	cin >> n >> m;

	int matriz[1010][1010];

	g.n_vertices = n*m;

	int contador = 0;

	forn(i, n){
		forn(j, m){
			cin >> matriz[i][j];
			if(matriz[i][j] == 2){
				origem = contador;
				matriz[i][j] = 1;
			}else if(matriz[i][j] == 3){
				destino = contador;
				matriz[i][j] = 1;
			}
			contador++;
		}
	}

	contador = 0;

	forn(i, n){
		forn(j, m){
			// verifico se é um vértice
			if(matriz[i][j] != 0){
				if((i-1) >= 0){
					if(matriz[i-1][j] == 1){
						g.grafo[contador].push_back(make_pair(contador-m, 1));
					}
				}
				if((i+1) < n){
					if(matriz[i+1][j] == 1){
						g.grafo[contador].push_back(make_pair(contador+m, 1));
					}
				}
				if((j-1) >= 0){
					if(matriz[i][j-1] == 1){
						g.grafo[contador].push_back(make_pair(contador-1, 1));
					}
				}
				if((j+1) < m){
					if(matriz[i][j+1] == 1){
						g.grafo[contador].push_back(make_pair(contador+1, 1));
					}
				}
			}
			contador++;
		}
	}
	/*
	forn(i, g.n_vertices){
		if(g.grafo[i].size() != 0){
			cout << i << "->";
			forn(j, g.grafo[i].size()){
				cout << g.grafo[i].at(j).first << "->";
			}
			cout << "\\\n";
		}
	}
	*/

	DFS(g, origem);

	cout << g.tempo_descoberta[destino] << endl;

	return 0;
}