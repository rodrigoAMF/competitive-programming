#include <bits/stdc++.h>

// Nome de Tipos
typedef long ll;
typedef unsigned long long ull;
typedef long double ld;

// Atalhos
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define l length()
#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define fornx(i, x, n) for ( int i = (x); i < (n); ++i )

using namespace std;

int pd[1001][1001];
char esteiras[1001][1001];
int jaVisitadas[1001][1001];
int loop;

int calculaFX(int i, int j, int n, int m){
	if(i < 0 || i == n || j < 0 || j == m){
		return 0;
	}
	if(jaVisitadas[i][j] == 1){
		loop = 1;
		return 0;
	}else{
		jaVisitadas[i][j] = 1;
	}
	if(esteiras[i][j] == 'N'){
		return 1 + calculaFX(i-1, j, n, m);
	}else if(esteiras[i][j] == 'S'){
		return 1 + calculaFX(i+1, j, n, m);
	}else if(esteiras[i][j] == 'E'){
		return 1 + calculaFX(i, j+1, n, m);
	}else{
		return 1 + calculaFX(i, j-1, n, m);
	}
}

int main() {
	int n, m;
	char coordenada;

	cin >> n >> m;

	memset(pd, 0, sizeof(pd[0][0])*1001*1001);

	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> esteiras[i][j];
		}
	}

	int fX = 0;
	int saida;
	int ia, ja;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(pd[i][j] != 0){
				saida = pd[i][j];
			}
			memset(jaVisitadas, 0, sizeof(jaVisitadas[0][0])*1001*1001);
			saida = calculaFX(i, j, n, m);

			ia = i;
			ja = j;

			if(loop == 1){
				do{
					pd[ia][ja] = pd[i][j];
					if(esteiras[ia][ja] == 'N'){
						ia--;
					}else if(esteiras[ia][ja] == 'S'){
						ia++;
					}else if(esteiras[ia][ja] == 'E'){
						ja++;
					}else{
						ja--;
					}
				}while(ia != i || ja != j);
				loop = 0;
			}
			
			
			fX += saida;
		}
	}

	cout << fX << "\n";
	

	return 0;
}
