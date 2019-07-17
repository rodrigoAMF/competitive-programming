#include <bits/stdc++.h>

// Nome de Tipos
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

// Valores
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

// Atalhos
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, n) for ( int i = 0; i < (n); ++i )

using namespace std;

int main(){

	int n;

	cin >> n;
	
	forn(i, n){
		int m,c;

		cin >> m >> c;
		int tabela_hash[m][c];
		memset(tabela_hash, -1, sizeof(tabela_hash[0][0]) * m * c);

		forn(j, c){
			int aux, pos;
			cin >> aux;
			pos = aux%m;

			int contador = 0;
			while(tabela_hash[pos][contador] != -1)
				contador++;

			tabela_hash[pos][contador] = aux;
		}

		forn(j, m){
			cout << j << " -> ";
			int contador = 0;
			while(tabela_hash[j][contador] != -1)
				cout << tabela_hash[j][contador++] << " -> ";
			cout << "\\" << endl;
		}

		if(i != n-1)
			cout << endl;
	}


	return 0;
}