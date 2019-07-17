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
	while(true){
		stringstream ss;
		string line;
		int n;

		cin >> line;

		// Verifica se é hex ou dec
		if(line[0] == '0' && line[1] == 'x'){
			stringstream ss;

			ss << line;

			ss >> hex >> n;

			cout << dec << n << endl;
		}else{
			n = stoi(line);

			if(n < 0)
				break;

			cout << "0x" << uppercase << hex << n << endl;
		}
	}

	return 0;
}