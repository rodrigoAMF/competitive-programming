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

	int nc;
	vector<int> alturas;
	cin >> nc;
	
	forn(i, nc){
		int n;
		cin >> n;
		alturas.resize(n);
		
		forn(j, n){
			scanf("%d", &alturas[j]);
		}

		sort(alturas.begin(), alturas.end());

		printf("%d", alturas[0]);
		for(int j = 1; j < n; j++){
			printf(" %d", alturas[j]);
		}
		printf("\n");
	}


	return 0;
}