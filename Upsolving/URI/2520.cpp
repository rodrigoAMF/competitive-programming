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
	int n, m, x1, y1, x2, y2;

	while(true){
		int distancia;
		x1 = x2 = y1 = y2 = 0;
		cin >> n >> m;
		if(!cin) break;

		forn(i, n){
			forn(j, m){
				int aux;
				cin >> aux;
				if(aux == 1){
					x1 = i;
					y1 = j;
				}
				if(aux == 2){
					x2 = i;
					y2 = j;
				}
			}
		}
		int resultado = 0;

		resultado = abs(x2-x1) + abs(y2-y1);

		cout << resultado << endl;

	}
	
    return 0;
}