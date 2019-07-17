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
	long long int n;

	while(true){
		cin >> n;
		if(!cin) break;
		int contador = 0;
		int copias = 1;
		while(true){
			if(copias == n) break;
			copias*=2;
			contador++;
		}
		if(n == 1){
			cout << "0" << endl; 
		}else{
			cout << contador << endl;
		}
	}
	
	return 0;
}