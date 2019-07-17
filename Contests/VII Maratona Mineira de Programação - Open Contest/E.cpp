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
	#ifndef ONLINE_JUDGE
	    freopen("inputf.txt", "r", stdin);
	    freopen("outputf.txt", "w", stdout);
	#endif

	int n;

	cin >> n;

	vector<pair<int,int> > valores;

	forn(i, n){
		valores.push_back(make_pair(i+1, i+1));
	}

	int excluidos[n];

	forn(i, n){
		int atual;
		cin >> atual;
		valores.erase(valores.begin()+atual-1);
	}

	cout << "a" << endl;
	

	return 0;
}