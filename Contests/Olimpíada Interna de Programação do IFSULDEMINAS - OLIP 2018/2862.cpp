#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x;

	scanf("%d", &n);

	while(n--){
		scanf("%d", &x);

		if(x > 8000)
			printf("Mais de 8000!\n");
		else
			printf("Inseto!\n");
	}

	return 0;
}