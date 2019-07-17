#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30
#define EPS (double)1e-9
#define RAD(x) (double)(x*PI)/180.0
#define PCT(x,y) (double)x*100.0/y

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )

using namespace std;

int main(){
	int p,j1,j2,r,a;

	cin >> p >> j1 >> j2 >> r >> a;

	if(r == 1){
		if(a == 1)
			cout << "Jogador 2 ganha!" << endl;
		else
			cout << "Jogador 1 ganha!" << endl;
	}else{
		if(a == 1)
			cout << "Jogador 1 ganha!" << endl;
		else{
			if(p == 1){
				if(((j1+j2)%2) == 0)
					cout << "Jogador 1 ganha!" << endl;
				else
					cout << "Jogador 2 ganha!" << endl;
			}else{
				if(((j1+j2)%2) == 0)
					cout << "Jogador 2 ganha!" << endl;
				else
					cout << "Jogador 1 ganha!" << endl;
			}
		}
	}

	return 0;
}