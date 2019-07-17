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

typedef struct{
	int distancia;
	int tonalidade;
}montes;

int n;

bool comparaMontes(montes a, montes b){ 
	return a.distancia < b.distancia;
}

int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	cin >> n;

	montes m[n];
	vector<int> tonalidade;

	forn(i, n){
		cin >> m[i].distancia >> m[i].tonalidade;
		tonalidade.push_back(m[i].tonalidade);
	}

	sort(tonalidade.begin(), tonalidade.end(), greater<int>());
	sort(m, m+n, comparaMontes);

	bool ok = true; 

	forn(i, n){
		//cout << "M -> " << m[i].distancia << " " << m[i].tonalidade;
		if(m[i].tonalidade != tonalidade.at(i)){
			ok = false;
			break;
		}
	}
	
	if(ok){
		cout << "S\n";
	}else
		cout << "N\n";
}