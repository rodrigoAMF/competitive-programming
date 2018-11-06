int soma(int x){
	int s = 0;
	// vamos reduzindo x até acabarmos (quando chegamos a zero)
	while(x > 0){
		s += arvore[x]; // adicionamos o pedaço de árvore atual à soma
		x -= (x & -x); // removemos o bit menos significante
	}
}
void atualiza(int x, int v){ // adicionar v frutas a caixa x
	while(x <= N){ // nosso teto, que é quando vamos parar de rodar o algoritmo
		arvore[x] += v; // adicionamos v frutas a arvore[x], como devemos
		x += (x & -x); // atualizamos o valor de x adicionado ele ao seu LSB
	}
}