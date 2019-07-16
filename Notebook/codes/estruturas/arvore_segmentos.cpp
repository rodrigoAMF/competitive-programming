void atualiza(int no, int i, int j, int posicao, int novo_valor){
	// se tivermos i = j, temos i = posicao = j. Logo, estamos no nó mais baixo da ávore
	if(i == j){
		arvore[no] = i;
		acao[posicao] = novo_valor;
	}
	else{
		int esquerda = 2*no; // índice do filho da esquerda
		int direita = 2*no + 1; // índice do filho da direita
		int meio = (i + j)/2;
		if(posicao <= meio) atualiza(esquerda, i, meio, posicao, novo_valor);
		else atualiza(direita, meio+1, j, posicao, novo_valor);
		if( acao[ arvore[esquerda] ] < acao[ arvore[direita] ] ) arvore[no] = arvore[esquerda];
		else arvore[no] = arvore[direita];
	}
}
int consulta(int no, int i, int j, int A, int B){
	if(A <= i && j <= B){
		return arvore[no];
	}
	if(i > B || A > j){
		return -1;
	}
	int esquerda = 2*no;
	int direita = 2*no + 1;
	int meio = (i + j)/2;
	int resposta_esquerda = consulta(esquerda, i, meio, A, B);
	int resposta_direita = consulta(direita, meio+1, j, A, B);
	if(resposta_esquerda == -1) return resposta_direita;
	if(resposta_direita == -1) return resposta_esquerda;
	if(acao[resposta_esquerda] < acao[resposta_direita]) return resposta_esquerda;
	else return resposta_direita;
}