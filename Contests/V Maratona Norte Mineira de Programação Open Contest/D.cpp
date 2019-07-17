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
	int x, y, m;
	int maior_e, menor_e;
	while(cin >> x >> y >> m){
		if(x >= y){
			maior_e = x;
			menor_e = y;
		}else{
			maior_e = y;
			menor_e = x;
		}

		forn(i, m){
			int xi, yi;
			int maior_c, menor_c;

			cin >> xi >> yi;
			
			if(xi >= yi){
				maior_c = xi;
				menor_c = yi;
			}else{
				maior_c = yi;
				menor_c = xi;
			}
			//cout << maior_e << " " << menor_e << endl;
			//cout << maior_c << " " << menor_c << endl;

			if(maior_c <= maior_e && menor_c <= menor_e){
				cout << "Sim" << endl;
			}else{
				cout << "Nao" << endl;
			}
		}
	}
	return 0;
}