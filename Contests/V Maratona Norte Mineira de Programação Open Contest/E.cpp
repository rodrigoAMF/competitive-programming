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

int aux[100];

void backtrack(int n){
	if(n == 3){
		forn(i, 3){
			cout << aux[i] << endl;
		}
	}else{
		forn(i, 4){
			aux[i] = vetor[j];
		}
	}
}

int main(){
	int n, k;
	while(cin >> n >> k){
		int vetor[n];
		forn(i, n){
			cin >> vetor[i];
		}

		double media = (vetor[n-1]+vetor[n-2]+vetor[n-4])/3.0;

		cout << setprecision(1) << fixed << media << endl;

	}
	return 0;
}