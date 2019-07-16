#include <bits/stdc++.h>

// Nome de Tipos
typedef long ll;
typedef unsigned long long ull;
typedef long double ld;

// Atalhos
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define l length()
#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define fornx(i, de, ate) for ( int i = (de); i < (ate); ++i )

using namespace std;

int main() {
	int n;
	int entrada, saida;
	int maiorDiff = -1;
	int maiorN = -1, menorN = 40001;

	int tempos[40001];

	memset(tempos, 0, sizeof(tempos));
	
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> entrada >> saida;
		menorN = (entrada < menorN) ? entrada : menorN;
		maiorN = (saida > maiorN) ? saida : maiorN;
		for(int j = entrada; j < saida; j++){
			if(j == entrada){
				tempos[j] = 2;
			}else if(tempos[j] != 2){
				tempos[j] = 1;
			}
			
		}
	}

	int inicio2, fim2;
	bool inicio = false;

	for(int i = menorN; i <= maiorN; i++){
		if(tempos[i] == 2 && !inicio){
			inicio = true;
			inicio2 = i;
		}else if((tempos[i] == 2 || tempos[i] == 0)  && inicio){
			fim2 = i;
			if(fim2-inicio2 > maiorDiff){
					maiorDiff = fim2-inicio2;
				}
			if(tempos[i] == 2){
				inicio2 = i;
			}else{
				inicio = false;
			}
		}
	}

	cout << maiorDiff << "\n";

	return 0;
}
