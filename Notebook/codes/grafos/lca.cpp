int LCA(int u, int v){
	
	if(nivel[u] < nivel[v]) swap(u, v); // isto é para definir u como estando mais abaixo
	
	// vamos agora fazer nivel[u] ser
	// igual nivel[v], subindo pelos
	// ancestrais de u
	
	for(int i = MAXL-1;i >= 0;i--)
		if(nivel[u] - (1<<i) >= nivel[v])
			u = ancestral[u][i];
			
	// agora, u e v estão no mesmo nível
	if(u == v) return u; // se eles forem o mesmo nó já achamos nossa resposta
	
	// subimos o máximo possível de forma
	// que os dois NÃO passem a ser iguais
	
	for(int i = MAXL-1;i >= 0;i--)
		if(ancestral[u][i] != -1 && ancestral[u][i] != ancestral[v][i]){
			u = ancestral[u][i];
			v = ancestral[v][i]
		}
	
	// como subimos o máximo possível
	// sabemos que u != v e que pai[u] == pai[v]
	// logo, LCA(u, v) == pai[u] == pai[v]
	
	return ancestral[u][0];
}