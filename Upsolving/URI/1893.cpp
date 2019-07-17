#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;

int main(){
	int n, pos_maior = 0;
	double maior = 0.0;

	cin >> n;

	int ra[n];
	double notas[n];

	forn(i, n){
		cin >> ra[i] >> notas[i];
		if(notas[i] > maior){
			maior = notas[i];
			pos_maior = i;
		}
	}
	if(maior >= 8){
		cout << ra[pos_maior] << endl;
	}else{
		cout << "Minimum note not reached" << endl;
	}
	
	return 0;
}