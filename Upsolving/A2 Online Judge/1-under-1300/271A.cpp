#include <bits/stdc++.h>

using namespace std;

int nd = 0;

int checaNumero(int n){
	int aux = n;
	int digito;
	int digitos[10];

	memset(digitos, 0, 10*sizeof(digitos[0]));

	while(aux > 0){
		digito = aux%10;
		if(digitos[digito] > 0)
			return false;
		else
			digitos[digito]++;
		
		aux = aux/10;
	}
	nd = n;
	return true;
}

int main(){
	int n;

	scanf("%d", &n);

	while(1){
		if(checaNumero(++n))
			break;
	}

	printf("%d\n", nd);
	

	return 0;
}