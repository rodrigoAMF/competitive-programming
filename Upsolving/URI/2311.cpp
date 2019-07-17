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
	
	cin >> n;

	string nomes[n];

	cout << fixed << setprecision(2);

	forn(i, n){
		double grau_dificuldade;
		double pontuacao;
		double n1, n2, n3, n4, n5, n6, n7;
		vector<double> notas;

		cin >> nomes[i];
		cin >> grau_dificuldade;
		cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;
		notas.push_back(n1);
		notas.push_back(n2);
		notas.push_back(n3);
		notas.push_back(n4);
		notas.push_back(n5);
		notas.push_back(n6);
		notas.push_back(n7);
		sort(notas.begin(), notas.end());

		notas.erase(notas.begin());
		notas.pop_back();

		pontuacao = notas[0] + notas[1] + notas[2] + notas[3] + notas[4];
		pontuacao *= grau_dificuldade;

		cout << nomes[i] << " " << pontuacao << endl;
	}


    return 0;
}