#include <bits/stdc++.h>

// Nome de Tipos
typedef long ll;
typedef unsigned long long ull;
typedef long double ld;

using namespace std;

typedef struct {
	int c;
	int l;
	int h;
} Caixa;

// Definir comparator para a struct
bool cmp(Caixa const & x, Caixa const & y){
	if(x.c < y.c && x.l < y.l && x.h < y.h) {
		return true;
	}else {
		return false;
	}
}

int main(){
	int n;

	cin >> n;

	Caixa caixas[n];

	for(int i = 0; i < n; i++){
		cin >> caixas[i].c >> caixas[i].l >> caixas[i].h;
	}

	sort(&caixas[0],&caixas[n], cmp);

	bool possivel = true;

	for(int i = 0; (i < n-1) && possivel; i++){
		if(!(caixas[i].c < caixas[i+1].c && caixas[i].l < caixas[i+1].l && caixas[i].h < caixas[i+1].h)){
			possivel = false;
		}
	}

	if(possivel){
		cout << "S\n";
	}else{
		cout << "N\n";
	}

	return 0;
}