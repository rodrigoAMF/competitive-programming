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
	map<string, double> produtos;
	int n;

	cout << fixed << setprecision(2);
	cin >> n;

	cin.ignore();

	forn(i, n){
		int m;
		string produtos_disponiveis;
		double valor_disponiveis;

		cin >> m;

		forn(j, m){
			cin >> produtos_disponiveis >> valor_disponiveis;
			produtos.insert(MP(produtos_disponiveis, valor_disponiveis));
		}
		
		int p;
		double total = 0;
		string produtos_lista;
		double quantidade_lista;

		cin >> p;
		
		forn(j, p){
			cin >> produtos_lista >> quantidade_lista;
			total += produtos[produtos_lista]*quantidade_lista;
		}
		
		produtos.clear();
		cout << "R$ " << total << endl;

	}

	return 0;
}