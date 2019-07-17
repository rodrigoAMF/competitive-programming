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
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, n) for ( int i = 0; i < (n); ++i )

using namespace std;

int main(){
	

	// s = so + vt;

	/*

	L = ladrão G = guarda
	L  G
	|  /
	| /
	|/
	Fronteira

	*/
	double d, vf, vg;
	while(cin >> d >> vf >> vg){
		double hipotenusa = sqrt(d*d + 144);

		double sf = 12/vf;
		double sg = hipotenusa/vg;


		if(sg <= sf){
			cout << "S" << endl;
		}else{
			cout << "N" << endl;
		}
	}
	return 0;
}