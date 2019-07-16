#include <bits/stdc++.h>

using namespace std;

int memo[101][101];
int capacidade, n_projeteis;
int valores[51], pesos[51];

void mochila(){
	for(int i = 0; i <= capacidade+1; i++){
        for(int j = 0; j <= n_projeteis+1; j++){
            if(i == 0 || j == 0){
                memo[i][j] = 0;
                continue;
            }
            memo[i][j] = memo[i][j-1];
            // peso do item <= capacidade atual da mochila
            if(pesos[j] <= i){
                if((memo[i-pesos[j]][j-1]+valores[j]) >= memo[i][j]){
                    memo[i][j] = memo[i-pesos[j]][j-1]+valores[j];
                }
            }
        }
    }
}
        

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &n_projeteis);
		for(int j = 0; j < n_projeteis; j++){
			int x, y;
			scanf("%d %d", &x, &y);
			valores[j+1] = x;
			pesos[j+1] = y;
		}
		scanf("%d", &capacidade);
		int resistencia;
		scanf("%d", &resistencia);

		mochila();

		if(memo[capacidade][n_projeteis] >= resistencia){
			printf("Missao completada com sucesso\n");
		}else{
			printf("Falha na missao\n");
		}


	}

	return 0;
}