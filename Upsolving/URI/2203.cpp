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
	double xf, yf, xi, yi, vi, ru, rc;
	double range, distancia;

	while(true){
		cin >> xf >> yf >> xi >> yi >> vi >> ru >> rc;
		if(!cin) break;

		distancia = pow((xi-xf), 2.0);
		distancia = distancia+pow((yi-yf), 2.0);
		distancia = sqrt(distancia);
		distancia += vi*1.5;

		range = ru+rc;
		
		if(distancia < range){
			cout << "Y" << endl;
		}else{
			cout << "N" << endl;
		}
	}

    return 0;
}