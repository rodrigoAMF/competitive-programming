#include <bits/stdc++.h>

using namespace std;

// efetua busca binária sobre vetor.
int buscaBinaria(int vetor[], int inicio, int fim, int chave) {
    int candidato = (fim-inicio)/2;
    if(vetor[candidato+inicio] == chave) {
        return candidato+inicio;
    } else {
        if(vetor[candidato+inicio] > chave) {
            return buscaBinaria(vetor, inicio, candidato+inicio, chave);
        } else {
            return buscaBinaria(vetor, candidato+inicio,fim, chave);
        }
    } 
}

int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	 
	    freopen("output.txt", "w", stdout);
	#endif

	int qtd, i;
    while(true) {
    	cin >> qtd;

    	if(!cin) break;

        int vetor[qtd];

        for(i = 0; i < qtd; ++i) {
        	scanf("%d", &vetor[i]);
        }

        int numeroSorte;
        cin >> numeroSorte;

        int posicao = buscaBinaria(vetor, 0, qtd, numeroSorte) + 1;

        int ehSorte = 1;
        int passo = 2;
        while(posicao >= passo) {
            if(posicao % passo == 0) {
                ehSorte = 0;
                break;
            }
            posicao = posicao - (posicao/passo);
            passo++;
        }

        if(ehSorte) {
        	cout << "Y\n";
        } else {
        	cout << "N\n";
        }
    }
	return 0;
}