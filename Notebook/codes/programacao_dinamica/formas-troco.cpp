#include <bits/stdc++.h>

using namespace std;

//#define INFINITO 99999
#define MAX 10001

int memo[MAX][MAX], moedas[MAX];
int n;

// Complexidade O(nS²)
int contaFormasDarTroco(int moedaAtual, int troco){
    // Encontrou uma solução
    if(troco == 0){
        return 1;
    }
    // Já usou todas as moedas
    if(moedaAtual == n){
        return 0;
    }
    // Estado já foi calculado
    if(memo[moedaAtual][troco] != -1){
        return memo[moedaAtual][troco];
    }

    int vezesUtilizada = 0;
    int resposta = 0;

    // Enquanto a condição não for satisfeita,
    // ainda é possível usar a moeda i para
    // dar o troco
    while((vezesUtilizada*moedas[moedaAtual]) <= troco){
        resposta = resposta + contaFormasDarTroco(moedaAtual+1, troco-(moedas[moedaAtual]*vezesUtilizada));
        vezesUtilizada++;
    }
    memo[moedaAtual][troco] = resposta;
    return memo[moedaAtual][troco];
}

// Complexidade O(nS)
int contaFormasDarTroco2(int moedaAtual, int troco){
    // Encontrou uma solução
    if(troco == 0){
        return 1;
    }
    // Já usou todas as moedas
    if(moedaAtual == n){
        return 0;
    }
    // Estado já foi calculado
    if(memo[moedaAtual][troco] != -1){
        return memo[moedaAtual][troco];
    }

    int respostaUsando, respostaSemUsar;

    respostaUsando = respostaSemUsar = 0;

    if(moedas[moedaAtual] <= troco){
        respostaUsando = contaFormasDarTroco2(moedaAtual, troco-moedas[moedaAtual]);
    }

    respostaSemUsar = contaFormasDarTroco2(moedaAtual+1, troco);

    memo[moedaAtual][troco] = respostaUsando + respostaSemUsar;

    return memo[moedaAtual][troco];
}

int main(){
	int troco;

	memset(memo, -1, sizeof(memo[0][0]) * (n+1) * (troco+1));

	scanf("%d %d", &n, &troco);

	for(int i = 0; i < n; i++){
		scanf("%d", &moedas[i]);
	}
	printf("%d\n", contaFormasDarTroco2(0, troco));

    return 0;
}