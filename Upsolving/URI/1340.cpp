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
	stack<int> pilha;
	queue<int> fila;
	priority_queue<int> fila_prioridades;

	while(cin >> n){
		string saida, saidaP, saidaF, saidaFP;
		saida = saidaP = saidaF = saidaFP = "";
		forn(i, n){
			int op, val;
			cin >> op >> val;

			if(op == 1){
				pilha.push(val);
				fila.push(val);
				fila_prioridades.push(val);
			}else{
				saida += val;

				saidaP += pilha.top();
				pilha.pop();

				saidaF += fila.front();
				fila.pop();

				saidaFP += fila_prioridades.top();
				fila_prioridades.pop();
			}
		}

		if(saida == saidaP){
			if(saidaP == saidaFP || saidaP == saidaF){
				cout << "not sure" << endl;
			}else{
				cout << "stack" << endl;
			}
		}else if(saida == saidaF){
			if(saidaF == saidaP || saidaF == saidaFP){
				cout << "not sure" << endl;
			}else{
				cout << "queue" << endl;
			}
		}else if(saida == saidaFP){
			if(saidaFP == saidaF || saidaFP == saidaP){
				cout << "note sure" << endl;
			}else{
				cout << "priority queue" << endl;
			}
		}else{
			cout << "impossible" << endl;
		}
	}

	while(!pilha.empty()){
		pilha.pop();
	}

	while(!fila.empty()){
		fila.pop();
	}

	while(!fila_prioridades.empty()){
		fila_prioridades.pop();
	}

	return 0;
}