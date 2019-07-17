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

	cin >> n;
	cin.ignore();

	forn(i, n){
		string line;
		string expressao[7];

		getline(cin, line);

		// divide a string pelos espaços
		stringstream ss;
		ss << line;

		string aux;
		int contador = 0;
		while(ss >> aux){
			expressao[contador++] = aux;
		}

		int n1, d1, n2, d2;
		int numerador, denominador;

		n1 = stoi(expressao[0]);
		d1 = stoi(expressao[2]);
		n2 = stoi(expressao[4]);
		d2 = stoi(expressao[6]);

		if(expressao[3] == "+"){
			numerador = (n1*d2) + (n2*d1);
			denominador = d1*d2;
		}else if(expressao[3] == "-"){
			numerador = (n1*d2) - (n2*d1);
			denominador = d1*d2;
		}else if(expressao[3] == "*"){
			numerador = n1*n2;
			denominador = d1*d2;
		}else if(expressao[3] == "/"){
			numerador = n1*d2;
			denominador = n2*d1;
		}
		if((denominador < 0 && numerador > 0) || (denominador < 0 && numerador < 0)){
			numerador*=-1;
			denominador*=-1;
		}

		cout << numerador << "/" << denominador << " = ";
		
		int mdc = __gcd(numerador, denominador);
		numerador/=mdc;
		denominador/=mdc;

		if((denominador < 0 && numerador > 0) || (denominador < 0 && numerador < 0)){
			numerador*=-1;
			denominador*=-1;
		}
		
		cout << numerador << "/" << denominador << endl;
	}

	return 0;
}