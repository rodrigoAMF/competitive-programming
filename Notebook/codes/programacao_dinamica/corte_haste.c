#include <stdio.h>

int main() {

    // tamanho da haste.
    int n = 5;

    // Preço para cada tamanho de corte.
    // ex. para o tamanho 1 o preço é 2.
    int precos_corte[] = {2,4,3,1,5};

    int i, j;

    // Vetor de memorização.
    int memo[n+1];
    memo[0] = 0;    // Solução trivial - corte de tamanho zero com preço zero.

    for(i = 1; i <= n; ++i) {
        int q = -1;
        for(j = 1; j <= i; ++j) {
            if(q < (precos_corte[j-1] + memo[i-j])) {
                q = precos_corte[j-1]+memo[i-j];
            }
        }
        memo[i] = q;
    }

    // Solução está na última posição do vetor de memorização:
    printf("Valor de venda = %d",memo[n]);

    return 0;
}