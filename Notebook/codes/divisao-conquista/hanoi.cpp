#include <bits/stdc++.h>

using namespace std;
/* 
	Quantos movimentos são necessários para mover os discos de um
	pino para outro?
*/
int hanoi(int x){
	if(x == 1){
		return 1;
	}
	return 2 * hanoi(x - 1) + 1;
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int x;

	scanf("%d", &x);

	printf("Quantidade de passos = %d\n", hanoi(x));

	return 0;
}