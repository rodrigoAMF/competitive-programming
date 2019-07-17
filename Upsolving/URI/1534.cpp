#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define PI (double)acos(-1.0)
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

using namespace std;

void mostra_saida(int tamanho){
	int k = tamanho-1;
	for(int i = 0; i < tamanho; i++){
		for(int j = 0; j < tamanho; j++){
			if(j != i && j != k){
				cout << "3";
			}else if(j == k){
				cout << "2";
			}else if(j == i){
				cout << "1";
			}else{
				cout << "2";
			}
		}
		k--;
		cout << "\n";
	}
}

int main(){
	int entrada;

	while (true) {
    	cin >> entrada;
    	if (!cin)
        	break; 
    	mostra_saida(entrada);
	}
}