#define PB push_back // por simplicidade
#define MAXN 100100 // defino o valor de MAXN

vector<int> lis(vector<int> &v){
	
	// declaro s variáveis que vou usar
	vector<int> pilha, resp;
	int pos[MAXN], pai[MAXN];
	
	// para cada elemento
	for(int i=0; i<v.size(); i++){
		
		// declaro um iterador que guardará o elemento mais à esquerda de pilha
		// que não é menor que v[i]
		vector<int>::iterator it = lower_bound(pilha.begin(), pilha.end(), v[i]);
		
		// guardo a posição da pilha em que adicionarei o elemento
		int p = it-pilha.begin();
		
		// se it for o fim do vector, então não há elemento que não seja menor que v[i]
		// ou seja, todos os topos de pilha são menores ou iguais a v[i]
		
		// logo, criamos uma nova pilha e colocamos x no seu topo
		if(it==pilha.end()) pilha.PB(v[i]);
		
		// porém, se it apontar para alguma posição válida do vector
		// colocamos v[i] no topo desta pilha, substintuindo o valor que it aponta por v[i]
		else *it = x;
		
		// a posição original na sequência do número no topo da pilha p agora é i
		pos[p]=i;
		
		// se o elemento foi inserido na primeira pilha
		if(p==0) pai[i]=-1; // seu pai será -1
		
		// caso contrário, seu pai será a posição do elemento no topo da pilha anterior a ele
		else pai[i]=pos[p-1];
	}
	
	// p será a posição do elemento no topo da última pilha
	int p = pos[pilha.size()-1];
	
	// enquanto p não for -1
	while(p>=0){
		
		// adiciono o elemento na posição p à resposta
		resp.PB(v[p]);
		
		// e vou para o pai de p
		p=pai[p];
	}
	
	// inverto a ordem da resposta
	reverse(resp.begin(), resp.end());
	
	// por fim, retorno o vetor resp
	return resp;
}