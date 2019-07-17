#include <bits/stdc++.h>

using namespace std;

int main(){
	/*
	#ifndef ONLINE_JUDGE
	   freopen("input.txt", "r", stdin);
	   freopen("output.txt", "w", stdout);
	#endif
	*/

	int n1, n2, carta;
	set<int> cartas1, cartas2;

	scanf("%d %d", &n1, &n2);

	for(int i = 0; i < n1; i++){
		scanf("%d", &carta);
		cartas1.insert(carta);
	}
	for(int i = 0; i < n2; i++){
		scanf("%d", &carta);
		cartas2.insert(carta);
	}

	/* 
		Tamanho do baralho pode ter sido atualizado
		caso existam cartas iguais que foram excluídas
	*/
	n1 = cartas1.size();
	n2 = cartas2.size();
	int cartasTrocadas;

	if(n1 < n2){
		cartasTrocadas = n1;
		for(set<int>::iterator it = cartas1.begin(); it != cartas1.end(); ++it){
			if(cartas2.find(*it) != cartas2.end()){
				cartasTrocadas--;
			}
		}
	}else{
		cartasTrocadas = n2;
		for(set<int>::iterator it = cartas2.begin(); it != cartas2.end(); ++it){
			if(cartas1.find(*it) != cartas1.end()){
				cartasTrocadas--;
			}
		}
	}

	printf("%d\n", cartasTrocadas);

	return 0;
}