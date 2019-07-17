#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for ( int i = 0; i < (n); ++i )

int main(){
	int n, m;
	char aux;

	cin >> m >> n;

	int grafo[1001][1001];

	forn(i, m){
		forn(j, n){
			cin >> aux;
			if(aux == '.'){
				grafo[i][j] = 0;
			}else{
				grafo[i][j] = 1;
			}
		}
	}

	int costa = 0;

	forn(i, m){
		forn(j, n){
			// Verifico se o local é um terreno
			if(grafo[i][j] != 0){
				// Verifico cima
				if((i-1) >= 0){
					if(grafo[i-1][j] == 0){
						costa++;
						continue;
					}
				}else{
					costa++;
					continue;
				}
				// verifico baixo
				if((i+1) < m){
					if(grafo[i+1][j] == 0){
						costa++;
						continue;
					}
				}else{
					costa++;
					continue;
				}
				// verifico esquerda
				if((j-1) >= 0){
					if(grafo[i][j-1] == 0){
						costa++;
						continue;
					}
				}else{
					costa++;
					continue;
				}
				// verifico direita
				if((j+1) < n){
					if(grafo[i][j+1] == 0){
						costa++;
						continue;
					}
				}else{
					costa++;
					continue;
				}
			}
		}
	}

	cout << costa << endl;


	

	return 0;
}