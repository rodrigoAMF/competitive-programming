#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )

using namespace std;

int main(){
	string n1, n2;
	int tamanho_n1, contador_iguais, contador_sequencias, pos_inicio, caso_atual;

	caso_atual = 1;
	while(true){
		bool doenca = false;
		cin >> n1 >> n2;
		if(!cin) break;

		tamanho_n1 = n1.length();
		contador_iguais = contador_sequencias = pos_inicio = 0;

		if(tamanho_n1 == 2 && n1[0] == n1[1])
			doenca = true;

		forn(i, n2.length()){
			//cout << i << " " << contador_iguais << " " << n2[i] << " " << n1[contador_iguais];
			if(n2[i] == n1[contador_iguais]){
				contador_iguais++;
			}else{
				if(n2[i] == n1[0])
					contador_iguais = 1;
				else
					contador_iguais = 0;
			}
			//cout << " " << contador_iguais << endl;
			if(contador_iguais == tamanho_n1){
				contador_sequencias++;
				contador_iguais = 0;
				pos_inicio = i-tamanho_n1+2;
				if(doenca) i--;
			}
			
		}

		cout << "Caso #" << caso_atual << ":" << endl;
		if(contador_sequencias == 0){
			cout << "Nao existe subsequencia" << endl;
		}else{
			cout << "Qtd.Subsequencias: " << contador_sequencias << endl;
			cout << "Pos: " << pos_inicio << endl;
		}
		caso_atual++;
		cout << endl;
	}
	

	

	return 0;
}