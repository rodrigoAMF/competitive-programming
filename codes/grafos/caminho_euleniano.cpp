vector<int> caminho; // guardará nosso Caminho Euleriano (invertido)
vector<int> vizinhos[MAXN]; // nossa lista de adjacência
map< pair<int, int>, bool > deletada; // mapa que checa se a aresta já foi deletada
void acha_caminho(int v){
	for(int i = 0;i < (int)vizinhos[v].size();i++){
		int viz = vizinhos[v][i];
		if( deletada[make_pair(v, viz)] == true ) 
			continue;
		deletada[make_pair(v, viz)] = true;
		deletada[make_pair(viz, v)] = true;
		acha_caminho(viz);
	}
	caminho.push_back(v);
}