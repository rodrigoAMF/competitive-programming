#include <bits/stdc++.h>

using namespace std;

int main(){
	/*
	#ifndef ONLINE_JUDGE
	   freopen("input.txt", "r", stdin);
	   freopen("output.txt", "w", stdout);
	#endif
	*/
	
	int n, taco, tacosProduzidos;
	set<int> tacosEstoque;
	map<int,int> contagem;

	scanf("%d", &n);

	tacosProduzidos = 0;

	while(n--){
		scanf("%d", &taco);
		// Verifica se o taco não existe no estoque
		if(tacosEstoque.find(taco) != tacosEstoque.end()){
			contagem[taco] = 1;
			tacosProduzidos += 2;
			tacosEstoque.insert(taco);
		}else{
			if(contagem[taco] == 1){
				contagem[taco] = 0;
			}else{
				contagem[taco] = 1;
				tacosProduzidos += 2;
			}
		}
		
	}

	printf("%d\n", tacosProduzidos);

	return 0;
}