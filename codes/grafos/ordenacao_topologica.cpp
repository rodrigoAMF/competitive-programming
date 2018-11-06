#include <vector>
#include <iostream>
using namespace std;
//------------------------------
#define MAXN 100100
int n; // número de vértices
int m; // número de arestas
vector<int> grafo[MAXN];
int grau[MAXN];
vector<int> lista; // dos vértices de grau zero
//------------------------------
int main(){
	
	cin >> n >> m;

	for(int i = 1;i <= m;i++){
		int x, y;
		cin >> x >> y;

		// tarefa X tem que ser executada antes da tarefa Y
		grau[y]++;
		grafo[x].push_back(y);
	}
	
	for(int i = 1;i <= n;i++) if(grau[i] == 0) lista.push_back(i);
	
	// o procedimento a ser feito é semelhante a uma BFS
	int ini = 0;
	while(ini < (int)lista.size()){

		int atual = lista[ini];
		ini++;
		
		for(int i = 0;i < (int)grafo[atual].size();i++){
			int v = grafo[atual][i];
			grau[v]--;
			if(grau[v] == 0) lista.push_back(v); // se o grau se tornar zero, acrescenta-se a lista
		}
	}

	// agora, se na lista não houver N vértices,
	// sabemos que é impossível realizar o procedimento

	if((int)lista.size() < n) cout << "impossivel\n";
	else{
		for(int i = 0;i < (int)lista.size();i++) cout << lista[i] << " ";
		cout << endl;
	}
	
	return 0;
}