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

int main(){
	long long n;

	cin >> n;

	forn(i, n){
		long long x;

		cin >> x;

		string binary = bitset<50>(x).to_string();
		
		long long maior = 0;
		
		forn(j, binary.size()){
			long long contador = 0;
			while(j != binary.size() && binary[j] == '1'){
				j++;
				contador++;
			}
			if(contador > maior){
				maior = contador;
			}
		}
		
		cout << maior << endl;
	}

	return 0;
}