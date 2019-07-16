#include <bits/stdc++.h>

using namespace std;

int main(){
	int e, d;

	scanf("%d %d", &e, &d);

	if(e > d){
		printf("Eu odeio a professora!\n");
	}else if(e <= (d-3)){
		printf("Muito bem! Apresenta antes do Natal!\n");
	}else{
		printf("Parece o trabalho do meu filho!\n");
		e+=2;
		if(e < 24){
			printf("TCC Apresentado!\n");
		}else{
			printf("Fail! Entao eh nataaaaal!\n");
		}
	}

	return 0;
}