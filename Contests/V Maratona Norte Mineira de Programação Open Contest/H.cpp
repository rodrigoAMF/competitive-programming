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
	int h,m;

	while(cin >> h >> m){
		int n = (h*60)/m;
		double qt = (h*60.0)/m;


		double medidas[n];
		double media = 0;
		forn(i, n){
			cin >> medidas[i];
			media += medidas[i];
		}
		media /= n;

		double precisao = 0;

		forn(i, n){
			precisao += pow((medidas[i] - media), 2);
		}
		precisao/=n-1;
		precisao = sqrt(precisao);

		printf("%.5lf\n", precisao);
	}


	return 0;
}