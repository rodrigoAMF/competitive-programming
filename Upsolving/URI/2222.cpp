#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;

int qtd_uniao(vector<int>& x, vector<int>& y){
	bool menor;
	int tam_menor;
	vector<int> uniao;
	
	if(x.size() > y.size()){
		uniao = x;
		menor = false;
		tam_menor = y.size();
	}else{
		uniao = y;
		menor = true;
		tam_menor = x.size();
	}

	forn(i, tam_menor){
		if(menor){
			// verifica se o elemento em x[i] não existe em união
			if ( find(uniao.begin(), uniao.end(), x[i]) == uniao.end() ){
				uniao.push_back(x[i]);
			}
		}else{
			if ( find(uniao.begin(), uniao.end(), y[i]) == uniao.end() ){
				uniao.push_back(y[i]);
			}
		}
	}

	// apaga os elementos iguais do vetor
	sort( uniao.begin(), uniao.end() );
	uniao.erase( unique( uniao.begin(), uniao.end() ), uniao.end() );
	
	return uniao.size();
	
}
int qtd_interseccao(vector<int>& x, vector<int>& y){
	bool menor;
	int tam_menor;
	vector<int> interseccao;

	// verifico qual vetor é maior
	if(x.size() > y.size()){
		menor = false;
		tam_menor = y.size();
	}else{
		menor = true;
		tam_menor = x.size();
	}

	forn(i, tam_menor){
		if(menor){
			// verifica se o elemento x existe em y && verifica se o elemento x não existe em interseccao
			if ( find(y.begin(), y.end(), x[i]) != y.end() && find(interseccao.begin(), interseccao.end(), x[i]) == interseccao.end()){
				interseccao.push_back(x[i]);
			}
		}else{
			if ( find(x.begin(), x.end(), y[i]) != x.end() && find(interseccao.begin(), interseccao.end(), y[i]) == interseccao.end()){
				interseccao.push_back(y[i]);
			}
		}
		
	}

	return interseccao.size();
}

int main(){
	int t, n, q;
	int q1, q2, q3;

	cin >> t;

	forn(xx, t){
		cin >> n;

		vector<vector<int>> conjuntos;

		forn(i, n){
			vector<int> aux;
			int numero_elementos;

			cin >> numero_elementos;

			forn(j, numero_elementos){
				int temp;
				cin >> temp;
				aux.push_back(temp);
			}
			conjuntos.push_back(aux);
		}
		/*
		conjunto ok
		forn(xv, conjuntos.size()){
			forn(xy, conjuntos[xv].size()){
				cout << conjuntos[xv][xy] << " ";
			}
			cout << endl;
		}
		*/

		cin >> q;

		forn(i, q){
			cin >> q1 >> q2 >> q3;
			if(q1 == 1){
				cout << qtd_interseccao(conjuntos[q2-1], conjuntos[q3-1]) << endl;
			}else if(q1 == 2){
				cout << qtd_uniao(conjuntos[q2-1], conjuntos[q3-1]) << endl;
			}
		}
	}
	

    return 0;
}