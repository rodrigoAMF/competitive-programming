// Consulta O(log n)
// Atualização O(n)
// 5 tamanho do vetor (Colocar tamanho máximo)
int n = 5;
int v[5];
int arvore[5+1];

int soma(int posicao){
	int s = 0;
	// vamos reduzindo x até acabarmos (quando chegamos a zero)
	while(posicao > 0){
		s += arvore[posicao]; // adicionamos o pedaço de árvore atual à soma
		posicao -= (posicao & -posicao); // removemos o bit menos significante
	}
	return s;
}
void atualiza(int valor, int posicao){ // v[x] = v
	while(posicao <= n){ // nosso teto, que é quando vamos parar de rodar o algoritmo
		arvore[posicao] += valor; // adicionamos v frutas a arvore[x], como devemos
		posicao += (posicao & -posicao); // atualizamos o valor de x adicionado ele ao seu LSB
	}
}

// Chamar antes de realizar consulta
void criaArvore(){
	for(int i = 0; i < n; i++){
		atualiza(v[i], i+1);
	}
}

// [l, r]
int consulta(int l, int r){
	// Indices na árvore começam a partir de 1
	l++, r++;
	// Para efetuar consulta
	l -= 1;

	if(l < 0){
		return soma(r);
	}else{
		printf("%d %d\n", l, r);
		return soma(r) - soma(l);
	}
}

/*
	criaArvore();
	printf("%d", consulta(0,2));
*/