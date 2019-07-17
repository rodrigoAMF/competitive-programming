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
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define l length()
#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define fornx(i, x, n) for ( int i = (x); i < (n); ++i )

using namespace std;

int main(){
	while(true){
		char d;
		string n;
		cin >> d >> n;
		if(d == '0' && n == "0") break;

		n.erase(remove(n.begin(), n.end(), d), n.end());

		int contador = 0;
		while(n[contador] == '0')
			contador++;

		n.erase(0, contador);

		if(n.empty()){
			n = "0";
		}

		cout << n << endl;
	}


	return 0;
}