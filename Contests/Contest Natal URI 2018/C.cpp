#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int contador;
	int pulos;
	string gelo;

	scanf("%d ", &n);

	contador = pulos = 0;
	for(int i = 0; i < n; i++){
		getline(cin, gelo);
		if(gelo[0] == '.'){
			contador++;
			if(contador == 3){
				printf("N\n");
				return 0;
			}
		}else{
			if(contador > 0){
				pulos++;
			}
			contador = 0;
		}
	}
	if(contador > 0){
		pulos++;
	}

	printf("%d\n", pulos);

	return 0;
}