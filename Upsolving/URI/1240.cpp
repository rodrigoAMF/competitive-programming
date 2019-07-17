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
	int n;

	cin >> n;

	cin.ignore();

	forn(i, n){
		string n1, n2;

		cin >> n1 >> n2;

		if(n1.length() >= n2.length()){
			int pos = n1.length()-n2.length();
			bool igual = true;
			for(int j = pos, k = 0; j < n1.length() && igual; j++, k++){
				if(n1[j] != n2[k])
					igual = false;
			}
			if(igual)
				cout << "encaixa" << endl;
			else
				cout << "nao encaixa" << endl;
		}else{
			cout << "nao encaixa" << endl;
		}
	}

	return 0;
}