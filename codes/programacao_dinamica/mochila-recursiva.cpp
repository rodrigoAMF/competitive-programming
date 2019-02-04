#include <bits/stdc++.h>

using namespace std;

#define INFINITO 99999
#define MAX 10001

int memo[MAX][MAX], pesos[MAX], valores[MAX];
int n;
/*
	Objeto atual: Chamar com 0
	Weight: Capacidade da mochila
*/
int mochila(int objetoAtual, int weight){
	int r1, r2, resposta;

	if(objetoAtual == n){
		return 0;
	}
	if(memo[objetoAtual][weight] != -1){
		return memo[objetoAtual][weight];
	}
	r1 = r2 = 0;
	// Tentar colocar o objeto atual na mochila se ainda tiver espaço para ele
	if(pesos[objetoAtual] <= weight){
		r1 = valores[objetoAtual] + mochila(objetoAtual+1, weight-pesos[objetoAtual]);
	}
	// Calcula a melhor resposta sem usar o objetoAtual
	r2 = mochila(objetoAtual+1, weight);

	resposta = max(r1, r2);
	// Guarda a melhor resposta para o objeto atual com o peso w
	memo[objetoAtual][weight] = resposta;

	return resposta;
}


int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int weight;

	memset(memo, -1, sizeof(memo[0][0]) * (n+1) * (weight+1));

	scanf("%d %d", &n, &weight);

	for(int i = 0; i < n; i++){
		scanf("%d %d", &pesos[i], &valores[i]);
	}
	printf("%d\n", mochila(0, weight));

	return 0;
}