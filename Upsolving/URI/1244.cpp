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

typedef struct{
	string palavra;
	int tamanho;

	void atualizaTamanho(){
		tamanho = palavra.size();
	}
}Palavras;

vector<Palavras> palavras;

bool cmp(Palavras const & x,Palavras const & y){
    if(x.tamanho > y.tamanho) {
        return true;
    }
    else {
        return false;
    }
}

int main(){
	int n;

	cin >> n;
	cin.ignore();
	forn(i, n){
		string linha;

		getline(cin, linha);

		stringstream ss;
		ss << linha;

		Palavras aux;
		while(ss >> aux.palavra){
			aux.atualizaTamanho();
			palavras.push_back(aux);
		}

		stable_sort(palavras.begin(), palavras.end(), cmp);

		forn(i, palavras.size()){
			if(i != palavras.size()-1){
				cout << palavras[i].palavra << " ";
			}else{
				cout << palavras[i].palavra << endl;
			}
		}

		palavras.clear();
	}

	return 0;
}