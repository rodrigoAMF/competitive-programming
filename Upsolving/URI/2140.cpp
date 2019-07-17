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
	int n, m, troco;


	while(true){
		cin >> n >> m;

		if(n == m && n == 0) break;

		troco = m-n;

		forn(i, 2){
			if(i == 1 && troco == 0){
				troco = 999;
			}
			if(troco >= 100)
				troco-=100;
			else if(troco >= 50)
				troco-=50;
			else if(troco >= 20)
				troco-=20;
			else if(troco >= 10)
				troco-=10;
			else if(troco >= 5)
				troco-=5;
			else if(troco >= 2)
				troco-=2;
			else if(troco >= 1)
				troco-=1;
		}

		if(troco == 0){
			cout << "possible" << endl;
		}else{
			cout << "impossible" << endl;
		}
	}
	
	

	return 0;
}