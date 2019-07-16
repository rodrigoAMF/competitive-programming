#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	scanf("%d ", &n);

	string cartas;
	bool q, j, k, a;

	for(int i = 0; i < n; i++){
		cin >> cartas;
		q = j = k = a = false;

		for(int z = 0; z < (int)cartas.length(); z++){
			if(q & j & k & a) break;
			if(cartas[z] == 'Q')
				q = true;
			else if(cartas[z] == 'J')
				j = true;
			else if(cartas[z] == 'K')
				k = true;
			else if(cartas[z] == 'A')
				a = true;
		}
		if(q & j & k & a){
			printf("Aaah muleke\n");
		}else{
			printf("Ooo raca viu\n");
		}
	}

	return 0;
}