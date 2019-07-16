#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long long int  a, b;
	while(scanf("%llu %llu", &a, &b) != EOF){
		unsigned long long int resultado = a ^ b;

		printf("%llu\n", resultado);
	}

	return 0;
}