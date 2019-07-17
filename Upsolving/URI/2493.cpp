#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;

int main(){
	int n;

	while(cin >> n){
		// vetor de operadores que passam na verificação
		int a,b,c;
		char aux;
		int operacoes[n][4];
		forn(i, n){
			cin >> a >> b >> aux >> c;
			if((a + b) == c){
				operacoes[i][0] = 1;
			}else{
				operacoes[i][0] = 0;
			}
			if((a - b) == c){
				operacoes[i][1] = 1;
			}else{
				operacoes[i][1] = 0;
			}
			if((a * b) == c){
				operacoes[i][2] = 1;
			}else{
				operacoes[i][2] = 0;
			}
			if(operacoes[i][0] == 0 && operacoes[i][1] == 0 && operacoes[i][2] == 0){
				operacoes[i][3] = 1;
			}else{
				operacoes[i][3] = 0;
			}
		}

		string jogadores[n];
		// posição jogador
		int pj;
		// operador jogador
		char oj;
		int erros = 0;
		vector<string> perdedores;

		forn(i, n){
			cin >> jogadores[i] >> pj >> oj;
			if(oj == '+'){
				if(operacoes[pj-1][0] == 0){
				    perdedores.push_back(jogadores[i]);
				    erros++;
				}
			}else if(oj == '-'){
				if(operacoes[pj-1][1] == 0){
					perdedores.push_back(jogadores[i]);
				    erros++;
				}
			}else if(oj == '*'){
				if(operacoes[pj-1][2] == 0){
					perdedores.push_back(jogadores[i]);
				    erros++;
				}
			}else if(oj == 'I'){
				if(operacoes[pj-1][3] == 0){
					perdedores.push_back(jogadores[i]);
				    erros++;
				}
			}
		}
		if(erros == 0){
			cout << "You Shall All Pass!" << endl;
		}else if(erros == n){
			cout << "None Shall Pass!" << endl;
		}else{
			sort(perdedores.begin(), perdedores.end());
			forn(i, perdedores.size()){
				if(i != perdedores.size()-1){
					cout << perdedores[i] << " ";
				}else{
					cout << perdedores[i] << endl;
				}
			}
		}
		perdedores.clear();
		
	}
    return 0;
}