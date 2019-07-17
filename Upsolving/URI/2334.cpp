#include <bits/stdc++.h>

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define DINF (double)1e+30

#define forn(i, n) for ( int i = 0; i < (n); ++i )
#define forxn(i, x, n) for ( int i = (x); i < (n); ++i )
#define forr(i, a, b) for ( int i = (a); i <= (b); ++i )
#define ford(i, a, b) for ( int i = (a); i >= (b); −−i )

using namespace std;

int main(){
	string valor;
	unsigned long long int n;


	while(true){
		cin >> valor;

		if(valor[0] == '-') break;
		else
			n = stoull(valor, 0, 10);

		if(n > 0)
			n -= 1;
		else 
			n = 0;

		cout << n << endl;
	}

	

    return 0;
}