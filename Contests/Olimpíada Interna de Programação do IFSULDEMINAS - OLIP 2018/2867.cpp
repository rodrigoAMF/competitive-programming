#include <bits/stdc++.h>

using namespace std;

int main(){
	int c;

	scanf("%d", &c);

	for(int i = 0; i < c; i++){
		int n,m;
		scanf("%d %d", &n, &m);

		int resultado = m * log10(n);
		resultado++;
		printf("%d\n", resultado);
	}

	return 0;
}