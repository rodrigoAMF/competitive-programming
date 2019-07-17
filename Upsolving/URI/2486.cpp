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
	int t;
	int resultado;

	while(true){
		cin >> t;
		if(t == 0) break;

		resultado = 0;

		forn(i, t){
			int n;
			string alimento;
			cin >> n;
			getline(cin, alimento);
			if(alimento == " suco de laranja")
				resultado+=120*n;
			else if(alimento == " morango fresco")
				resultado+=85*n;
			else if(alimento == " mamao")
				resultado+=85*n;
			else if(alimento == " goiaba vermelha")
				resultado+=70*n;
			else if(alimento == " manga")
				resultado+=56*n;
			else if(alimento == " laranja")
				resultado+=50*n;
			else if(alimento == " brocolis")
				resultado+=34*n;
		}
		if(resultado >= 110 && resultado <= 130)
			cout << resultado << " mg" << endl;
		else{
			if(resultado > 130){
				resultado -= 130;
				cout << "Menos " << resultado << " mg" << endl;
			}else{
				resultado -= 110;
				cout << "Mais " << resultado*-1 << " mg" << endl;
			}
		}
	}
    return 0;
}