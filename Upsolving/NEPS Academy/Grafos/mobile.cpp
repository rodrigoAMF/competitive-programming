#include<bits/stdc++.h>
using namespace std;

typedef struct
{
	int pai;
	std::vector<int> filhos;

	int n_filhos;
}no;

/*bool andaNaArvore(no nos[], int n){
	int origem = 0;
	stack<int> locais;
	int visitados[n+1];
	memset(visitados, 0, sizeof(visitados));

	locais.push(origem);

	while(!locais.empty()){
		int pai = locais.top();
		locais.pop();
		visitados[pai] = 1;

		for(int i = 0; i < nos[pai].n_filhos; i++){
			int filho_atual = nos[pai].filhos.at(i);
			if(visitados[filho_atual] != 1){
				locais.push(filho_atual);
				cout << "F: " << nos[filho_atual].pai << " N: " << nos[filho_atual].n_filhos << endl;
				cout << "P: " << nos[pai].pai << " N: " << nos[pai].n_filhos << endl;
				// verifico se nível do filho é menor que o do pai
				if(nos[filho_atual].n_filhos < nos[pai].n_filhos)
					return false;
			}
		}
	}
	return true;
}*/

void BFS(Grafo &g, int origem){ 
	forn(i, g.n_vertices){
		g.visitado[i] = false;
		g.tempo_descoberta[i] = 0;
	}
	int tempo_atual = 0;
	g.visitado[origem] = true;
	g.tempo_descoberta[origem] = tempo_atual;
	queue<int> q;
	q.push(origem);
	while(!q.empty()){
		int u = q.front();
		g.tempo_descoberta[u] = ++tempo_atual;
		q.pop();
		forn(i, g.grafo[u].size()){
			int w = g.grafo[u].at(i).first;
			if(!g.visitado[w]){
				g.visitado[w] = true;
				q.push(w);
			}
		}
	}
}

int main(){
	int n;

	cin >> n;

	no nos[n+1];

	for(int contador = 0; contador <= n; contador++){
		nos[contador].pai = contador;
		nos[contador].n_filhos = 0;
	}

	for(int contador = 0; contador < n; contador++){
		int i, j;
		cin >> i >> j;
		nos[j].filhos.push_back(i);
		nos[j].n_filhos++;
	}

	//bool ok = andaNaArvore(nos, n);

	//int niveis[]

	/*if(ok){
		cout << "bem" << endl;
	}else{
		cout << "mal" << endl;
	}*/
	
	/*for(int contador = 0; contador <= n; contador++){
		cout << "Pai: " << nos[contador].pai << endl;
		cout << "Nº Filhos: " << nos[contador].n_filhos << endl;
		for(int contador2 = 0; contador2 < nos[contador].n_filhos; contador2++){
			cout << nos[contador].filhos.at(contador2) << " ";
		}
		cout << endl;
	}*/
}