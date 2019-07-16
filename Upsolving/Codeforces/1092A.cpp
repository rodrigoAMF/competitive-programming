#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, k;
	int resto;
	int n_ocorrencias;
	char letra_atual;
	int contador;

	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		scanf("%d %d", &n, &k);
		n_ocorrencias = floor(n/k);
		resto = n%k;
		if(resto > 0){
			n-=resto;
		}
		letra_atual = 'a';
		contador = 0;
		for(int j = 0; j < n; j++){
			printf("%c", letra_atual);
			if(++contador == n_ocorrencias){
				contador = 0;
				letra_atual++;
			}
		}
		if(resto > 0){
			letra_atual--;
			for(int i = 0; i < resto; i++){
				printf("%c", letra_atual);
			}
		}
		printf("\n", n_ocorrencias);
	}

	return 0;
}