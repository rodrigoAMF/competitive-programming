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

	while(n--){
		int c;

		cin >> c;

		int notas[c];
		double media = 0;
		forn(j, c){
			scanf("%d", &notas[j]);
			media+=notas[j];
		}
		media/=c;

		int total = 0;

		forn(j, c){
			if(notas[j] > media)
				total++;
		}

		double porcentagem = (double)total/c;
		porcentagem*=100;

		cout << setprecision(3) << fixed;
		cout << porcentagem << "%\n";
	}

	return 0;
}