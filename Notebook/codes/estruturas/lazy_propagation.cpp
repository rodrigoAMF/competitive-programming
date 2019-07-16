void atualiza(int no, int i, int j, int a, int b, int valor){
	int esquerda = 2*no; // índice do filho da esquerda
	int direita = 2*no + 1; // índice do filho da direita
	int meio = (i + j)/2;
	if(lazy[no]){
		arvore[no] += lazy[no]*(j - i + 1);
		if(i != j){
			lazy[direita] += lazy[no];
			lazy[esquerda] += lazy[no];
		}
		lazy[no] = 0;
	}
	if(i > j || i > b || a > j) return;
	if(a <= i && j <= b){
		arvore[no] += valor*(j-i+1);
		if(i != j){
			lazy[direita] += valor;
			lazy[esquerda] += valor;
		}
	}
	else{
		// atualizamos o filho da esquerda
		atualiza(esquerda, i, meio, a, b, valor);
		// atualizamos o filho da direita
		atualiza( direita, meio+1, j, a, b, valor);
		// atualizamos o nó que estamos
		arvore[no] = arvore[esquerda] + arvore[direita];
	}
}

// queremos saber a soma de todos os valores de índice no intervalo [A, B]
int consulta(int no, int i, int j, int a, int b){
	int esquerda = 2*no; // índice do filho da esquerda
	int direita = 2*no + 1; // índice do filho da direita
	int meio = (i + j)/2;
	if(lazy[no]){
		arvore[no] += lazy[no]*(j - i + 1);
		if(i != j){
			lazy[direita] += lazy[no];
			lazy[esquerda] += lazy[no];
		}
		lazy[no] = 0;
	}
	if(i > j || i > b || a > j) return 0;
	if(a <= i && j <= b)
		return arvore[no];
	else{
		int soma_esquerda = consulta(esquerda, i, meio, a, b);
		int soma_direita = consulta( direita, meio+1, j, a, b);
		return soma_esquerda + soma_direita;
	}
}