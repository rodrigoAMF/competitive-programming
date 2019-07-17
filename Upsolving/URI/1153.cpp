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

int fatorial(int n){
	if(n == 1){
		return 1;
	}
	return n*fatorial(n-1);
}


int main(){
	#ifndef ONLINE_JUDGE
	 
	    // For getting input from input.txt file
	    freopen("inputf.in", "r", stdin);
	 
	    // Printing the Output to output.txt file
	    freopen("outputf.in", "w", stdout);
	#endif

	int n;

	cin >> n;

	cout << fatorial(n) << endl;

	return 0;
}