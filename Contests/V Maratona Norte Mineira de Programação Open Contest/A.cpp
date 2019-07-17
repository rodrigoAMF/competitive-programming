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
#define l length()
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, n) for ( int i = 0; i < (n); ++i )

using namespace std;

int main(){
	int n, m, k;

	while(scanf("%d %d %d", &n, &m, &k) != EOF){
		int homens[n], mulher;

		forn(i, n){
			scanf("%d", &homens[i]);
			if(homens[i] < k){
				i--;
				n--;
			}
		}
		int contador = 0;
		forn(i, m){
			int resto;
			scanf("%d", &mulher);
			/*if(mulher < k){
				i--;
				m--;
				continue;
			}*/
			forn(j, n){
				resto = (homens[j]+mulher)%k;
				if(resto == 0)
					contador++;
			}
		}

		printf("%d\n", contador);
	}
	return 0;
}