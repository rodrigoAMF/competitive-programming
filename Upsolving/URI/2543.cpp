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
	int n, id;

	while(true){
		cin >> n >> id;
		if(!cin) break;
		int contador = 0;

		forn(i, n){
			int idAux, jAux;
			cin >> idAux >> jAux;
			if(idAux == id && jAux == 0){
				contador++;
			}
		}
		cout << contador << endl;
	}
	
	return 0;
}