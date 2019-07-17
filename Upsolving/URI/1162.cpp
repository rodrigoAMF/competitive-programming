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

int contador;

void bubbleSort(int arr[] ,int count ){
	int n=0,i, troca =1, aux;
	while (n < count && troca == 1){
		troca = 0;
		for(i=0;i<count -1;i ++){
			// trocar > por < caso necessário decrescente
			if( arr [i] > arr [i +1]){
				troca = 1;
				aux = arr [i];
				arr [i] = arr [i +1];
				arr [i+1] = aux;
				contador++;
			}
		}
		n++;
	}
}

int main(){
	int n;

	cin >> n;

	forn(i, n){
		contador = 0;
		int l;
		cin >> l;

		int vagoes[l];
		forn(j, l){
			cin >> vagoes[j];
		}

		bubbleSort(vagoes, l);

		cout << "Optimal train swapping takes " <<contador << " swaps." << endl;
	}
	return 0;
}