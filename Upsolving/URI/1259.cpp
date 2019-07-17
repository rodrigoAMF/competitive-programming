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
	vector<int> pares,impares;
	int n;

	cin >> n;

	forn(i, n){
		int aux;
		cin >> aux;
		if(aux%2 == 0)
			pares.push_back(aux);
		else
			impares.push_back(aux);
	}

	sort(pares.begin(), pares.end());
	sort(impares.begin(), impares.end(), greater<int>());

	forn(i, pares.size()){
		cout << pares.at(i) << endl;
	}
	forn(i, impares.size()){
		cout << impares.at(i) << endl;
	}

	return 0;
}