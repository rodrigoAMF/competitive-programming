#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )

using namespace std;

int main(){
	string j1, j2;
	int n;

	cin >> n;

	forn(i, n){
		cin >> j1 >> j2;

		if(j1 == "papel" && j2 == "papel"){
			cout << "Ambos venceram" << endl;
		}else if(j1 == "pedra" && j2 == "pedra"){
			cout << "Sem ganhador" << endl;
		}else if(j1 == "ataque" && j2 == "ataque"){
			cout << "Aniquilacao mutua" << endl;
		}else if(j1 == "ataque"){
			if(j2 == "pedra" || j2 == "papel"){
				cout << "Jogador 1 venceu" << endl;
			}
		}else if(j2 == "ataque"){
			if(j1 == "pedra" || j1 == "papel"){
				cout << "Jogador 2 venceu" << endl;
			}
		}else if(j1 == "pedra"){
			if(j2 == "papel"){
				cout << "Jogador 1 venceu" << endl;
			}
		}else if(j2 == "pedra"){
			if(j1 == "papel"){
				cout << "Jogador 2 venceu" << endl;
			}
		}
	}

	return 0;
}