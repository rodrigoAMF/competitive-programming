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
	int n, cameras = 0, contador = 0;

	cin >> n;

	int matriz[n+1][n+1];

	forn(i, n+1){
		forn(j, n+1){
			cin >> matriz[i][j];
		}
	}

	for(int j = 0, i = 0; j < n; j++){
		if(contador == n)
			break;
		cameras = 0;
		if(matriz[i][j] == 1)
			cameras++;
		if(matriz[i][j+1] == 1)
			cameras++;
		if(matriz[i+1][j] == 1)
			cameras++;
		if(matriz[i+1][j+1] == 1)
			cameras++;

		//cout << endl << i << " " << j << " " << cameras << endl;

		if(cameras >= 2){
			cout << "S";
		}else{
			cout << "U";
		}

		if(j == (n-1)){
			cout << endl;
			j = -1;
			i++;
			contador++;
		}
	}

    return 0;
}