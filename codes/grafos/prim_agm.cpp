typedef pair<int, int> pii;
#define MAXN 10100
#define INFINITO 999999999
int n, m; // número de vértices e arestas
int distancia[MAXN]; // o array de distâncias à fonte
int processado[MAXN]; // o array que guarda se um vértice foi processado
vector<pii> vizinhos[MAXN]; // nossas listas de adjacência. O primeiro elemento do par representa a distância e o segundo representa o vértice
int Prim(){
	for(int i = 2;i <= n;i++) 
		distancia[i] = INFINITO;
	distancia[1] = 0;
	priority_queue< pii, vector<pii>, greater<pii> > fila;
	fila.push( pii(distancia[1], 1) );
	while(true){
		int davez = -1;
		while(!fila.empty()){
			int atual = fila.top().second;
			fila.pop();
			if(!processado[atual]){
				davez = atual;
				break;
			}
		}
		if(davez == -1) break;
		processado[davez] = true;
		for(int i = 0;i < (int)vizinhos[davez].size();i++){
			int dist = vizinhos[davez][i].first;
			int atual = vizinhos[davez][i].second;
			if( distancia[atual] > dist && !processado[atual]){
				distancia[atual] = dist;
				fila.push( pii(distancia[atual], atual) );
			}
		}
	}
	int custo_arvore = 0;
	for(int i = 1;i <= n;i++) 
		custo_arvore += distancia[i];
	return custo_arvore;
}

int main(){
	cin >> n >> m;
	for(int i = 1;i <= m;i++){
		int x, y, tempo;
		cin >> x >> y >> tempo;
		vizinhos[x].push_back( pii(tempo, y) );
		vizinhos[y].push_back( pii(tempo, x) );
	}
	cout << Prim() << endl;
	return 0;
}