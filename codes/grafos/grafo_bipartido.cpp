int n; // número de vértices
vector<int> vizinhos[MAXN]; // a lista de adjacência de cada vértice
int cor[MAXN];
// a cor de cada vértice. Inicialmente, cor[i] = -1 para todos os vértices.
// definimos cor[i] = 0 como sendo azul e cor[i] = 1 como sendo rosa.
void colore(int x){
	cor[x] = 0;
	vector<int> fila;
	fila.push_back(x);
	int pos = 0;
	while(pos < (int)fila.size()){ // BFS
		int atual = fila[pos];
		pos++;
		for(int i = 0;i < (int)vizinhos[atual].size();i++){
			int v = vizinhos[atual][i];
			if(cor[v] == -1){
				cor[v] = 1 - cor[atual];
				fila.push_back(v); // adicionamos v a fila da BFS
			}
		}
	}
}
bool checa_bipartido(){
	for(int i = 1;i <= n;i++){
		if(cor[i] == -1){
			colore(i);
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 0;j < (int)vizinhos[i].size();j++){
			int v = vizinhos[i][j];
			if(cor[i] == cor[v]) 
				return false;
			}
	}
	return true;
}