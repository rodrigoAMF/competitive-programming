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
	int n;

	while(cin >> n){
		if(n == 0) break;

		queue<int> fila;

		// Adiciona elementos na fila
		for(int i = 1; i <= n; ++i){
			fila.push(i);
		}

		cout << "Discarded cards: ";

		// realiza oprações se possível
		while(fila.size() >= 2){
			int descartado = fila.front();
			fila.pop();
			int movido = fila.front();
			fila.pop();
			fila.push(movido);
			if(fila.size() >= 2)
				cout << descartado << ", ";
			else
				cout << descartado << endl;
		}
		cout << "Remaining card: " << fila.front() << endl; 
	}

	return 0;
}