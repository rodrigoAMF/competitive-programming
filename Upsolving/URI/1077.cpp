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

int verificaPrecedencia(char c){
	if(c == '+' || c == '-'){
		return 0;
	}else if(c == '*' || c == '/'){
		return 1;
	}else if(c == '^'){
		return 2;
	}
}

// http://csis.pace.edu/~wolf/CS122/infix-postfix.htm
void convertePosfixa(string expressao){
	stack<char> pilha;
	int maior_precedencia = 0;
	forn(i, expressao.length()){
		if((expressao[i] >= 'A' && expressao[i] <= 'Z') || (expressao[i] >= 'a' && expressao[i] <= 'z') || (expressao[i] >= '0' && expressao[i] <= '9')){
			cout << expressao[i];
		}else if(expressao[i] == '+' || expressao[i] == '-' || expressao[i] == '*' || expressao[i] == '/' || expressao[i] == '^'){
			if(verificaPrecedencia(expressao[i]) > verificaPrecedencia(pilha.top())){
				pilha.push(expressao[i]);
			}else{
				bool push = false;
				while(!pilha.empty()){
					char operador = pilha.top();
					pilha.pop();
					if(operador == '(')
						break;
					else{
						cout << operador;
						if(pilha.empty())
							continue;
						else{
							if(verificaPrecedencia(expressao[i]) > verificaPrecedencia(pilha.top())){
								pilha.push(expressao[i]);
								push = true;
								break;
							}
						}
					}
				}
				if(!push)
					pilha.push(expressao[i]);
			}
		}else if(expressao[i] == '('){
			pilha.push(expressao[i]);
		}else if(expressao[i] == ')'){
			while(!pilha.empty()){
				char elemento_topo = pilha.top();
				pilha.pop();
				if(elemento_topo == '('){
					break;
				}else{
					cout << elemento_topo;
				}
			}
		}
	}
	while(!pilha.empty()){
		char operador = pilha.top();
		pilha.pop();
		cout << operador;
	}
}

int main(){
	int n;

	cin >> n;

	cin.ignore();

	forn(i, n){
		string expressao;

		cin >> expressao;

		convertePosfixa(expressao);

		cout << endl;
	}


	return 0;
}