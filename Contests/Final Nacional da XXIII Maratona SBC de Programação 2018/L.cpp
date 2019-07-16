#include <bits/stdc++.h>

using namespace std;

// primos = 0, não primos = 1
int primos[100001];

void crivo(int n);

int main() {
	int q, n, k, contador;

	scanf("%d", &q);

	while(q--){
		scanf("%d %d", &n, &k);
		memset(primos, 0, sizeof(primos));

		if(k > n){
			printf("%d\n", (n-1));
		}else{
			crivo(n);

			contador = 0;
			for(int i = 2; i <= n; i++){
				if(primos[i] == 1 || i <= k){
					contador++;
				}
				if(!primos[i]){
					for(int j = 2; i*j <= n; j++){
						primos[i*j] = 0;
					}
				}
			}
			printf("%d\n", contador);
		}
		
	}
	return 0;
}

void crivo(int n) {
	int raiz = sqrt(n);

	for (int i = 2; i <= raiz; ++i) {
		if (!primos[i]) {
			for (int j = 2; j*i <= n; ++j) {
				primos[i*j] = 1;
			}
		}
	}
}
