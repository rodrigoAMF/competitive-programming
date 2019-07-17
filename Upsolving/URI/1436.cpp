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
	int t;

	cin >> t;
	int contador = 1;
	while(t--){
		int n;

		scanf("%d", &n);

		int idades[n];
		
		forn(i, n){
			cin >> idades[i];
		}

		int pos = (n-1)/2;

		printf("Case %d: %d\n", contador, idades[pos]);
		contador++;
	}

	return 0;
}