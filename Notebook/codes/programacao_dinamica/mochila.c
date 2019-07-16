#include <stdio.h>

// Retorna o máximo de dois números.
int max(int a, int b) {
    return a>b?a:b;
}

int main() {

    // Número de itens
    int n_itens = 3;

    // Vetor para armazenar o valor de cada item.
    int valor[] = {3, 4, 5};

    // Vetor para armazenar o peso de cada item.
    int peso[] = {2, 3, 2};

    // Capacidade da mochila.
    int capacidade = 6;

    // Matriz de memorização.
    int memo[capacidade+1][n_itens+1];

    int w,j;
    for(w = 0; w <= capacidade; ++w) {
        for(j = 0; j <= n_itens; ++j) {
            if(j == 0 || w == 0) {
                memo[w][j] = 0;
            } else {
                memo[w][j] = memo[w][j-1];
                if(peso[j-1] <= w) {
                    // --------------------------------------------
                    // Caso em que colocamos apenas uma vez um item
                    memo[w][j] = max(memo[w][j-1],
                        memo[w-peso[j-1]][j-1]+valor[j-1]);
                    // --------------------------------------------

                    // -----------------------------------------------------
                    // Caso em que um item pode ser colocado mais de uma vez
                    //memo[w][j] = max(memo[w][j],
                    //    memo[w-peso[j-1]][j]+valor[j-1]);
                    // -----------------------------------------------------
                }
            }
        }
    }

    // Solução ótima está no último elemento da matriz de memorização.
    printf("Valor ótimo = %d",memo[capacidade][n_itens]);

    return 0;
}